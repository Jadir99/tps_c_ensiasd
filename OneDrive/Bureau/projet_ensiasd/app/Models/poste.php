<?php

namespace App\Models;

use Illuminate\Database\Eloquent\Factories\HasFactory;
use Illuminate\Database\Eloquent\Model;

class poste extends Model
{
    use HasFactory;

    public function author(){
        return $this->belongsTo(User::class,'id');
    }
// all of media of one poste 
    public function media(){
        return $this->hasMany(media::class,'id_media');
    }
    // all of hashtags in this poste 
    public function hashtags()
    {
        return $this->belongsToMany(hashtag::class,'hashtag_poste','id_poste','user_id')->withPivot('date_ajout', 'joindre');
    }

    // all poste likers :
    public function likes(){
        return $this->belongsToMany(User::class,'like','user_id',"id_poste")->withPivot('like_id','date_like');
    }

    // return all  persons retweet this tweet 
    public function all_retweet(){
        return $this->belongsToMany(User::class,'retweet','user_id',"id_poste")->withpivot('id','date_retweet','response');
    }

    // return all   comments of this tweet 
    public function comments(){
        return $this->belongsToMany(User::class,'commentaire','user_id',"id_poste")->withpivot('comment_id','comment','date_comment');
    }


}
