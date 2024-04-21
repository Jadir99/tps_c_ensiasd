<?php

namespace App\Models;

use Illuminate\Database\Eloquent\Factories\HasFactory;
use Illuminate\Database\Eloquent\Model;

class hashtag extends Model
{
    use HasFactory;
    // show all posts that relate with thishashtag 
    public function all_posts(){       

    return $this->belongsToMany(poste::class,'hashtag_poste','id_poste','user_id')->withPivot('date_ajout', 'joindre');

    }
}
