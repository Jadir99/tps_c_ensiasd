<?php

namespace App\Models;

// use Illuminate\Contracts\Auth\MustVerifyEmail;
use Illuminate\Database\Eloquent\Factories\HasFactory;
use Illuminate\Foundation\Auth\User as Authenticatable;
use Illuminate\Notifications\Notifiable;
use Laravel\Sanctum\HasApiTokens;

class User extends Authenticatable
{
    use HasApiTokens, HasFactory, Notifiable;

    /**
     * The attributes that are mass assignable.
     *
     * @var array<int, string>
     */
    protected $fillable = [
        'name',
        'email',
        'password',
    ];

    /**
     * The attributes that should be hidden for serialization.
     *
     * @var array<int, string>
     */
    protected $hidden = [
        'password',
        'remember_token',
    ];

    /**
     * The attributes that should be cast.
     *
     * @var array<string, string>
     */
    protected $casts = [
        'email_verified_at' => 'datetime',
        'password' => 'hashed',
    ];
       // all poste of i creat 
       public function all_postes(){
        return $this->hasMany(poste::class);
    }

    //all of posted i liked 
    public function postes_i_like(){
        return $this->belongsToMany(poste::class,'like','user_id',"id_poste")->withPivot('like_id','date_like');
    }

    // all poste i retweet :
    public function all_retweet(){
        return $this->belongsToMany(poste::class,'retweet','user_id',"id_poste")->withpivot('id','date_retweet','response');
    }
    // all poste that i comments 
    public function comments(){
        return $this->belongsToMany(User::class,'commentaire','user_id',"id_poste")->withpivot('comment_id','comment','date_comment');
    }
    // all followers :
    public function followers()
{
    return $this->belongsToMany(User::class, 'follow', 'isfollowed', 'user_id')->withPivot('date_follow');
}

public function followings()
{
    return $this->belongsToMany(User::class, 'follow', 'isfollowed', 'user_id')->withPivot('date_follow');
}
}
