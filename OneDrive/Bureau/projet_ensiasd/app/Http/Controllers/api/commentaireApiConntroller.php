<?php

namespace App\Http\Controllers\Api;

use App\Http\Controllers\Controller;
use App\Models\commentaire as ModelsCommentaire;
use App\Models\User;
use Illuminate\Http\Request;
use Illuminate\Support\Facades\Auth;

use function PHPSTORM_META\type;

class commentaireApiConntroller extends Controller
{
    /**
     * Display a listing of the resource.
     */
    public function index()
    {
        $auth=User::findOrFail(1);
        echo $auth->id;
        var_dump($auth->all_postes);
        // $auth->id;
        foreach ($auth->all_postes as $comment){
            echo $comment->text_poste;
        }
    }

    /**
     * Store a newly created resource in storage.
     */
    public function store(Request $request)
    {
        //
    }

    /**
     * Display the specified resource.
     */
    public function show(string $id)
    {
        //
    }

    /**
     * Update the specified resource in storage.
     */
    public function update(Request $request, string $id)
    {
        //
    }

    /**
     * Remove the specified resource from storage.
     */
    public function destroy(string $id)
    {
        //
    }
}
