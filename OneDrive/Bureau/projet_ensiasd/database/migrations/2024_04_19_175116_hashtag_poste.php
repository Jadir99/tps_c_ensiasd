<?php

use Illuminate\Database\Migrations\Migration;
use Illuminate\Database\Schema\Blueprint;
use Illuminate\Support\Facades\Schema;

return new class extends Migration
{
    /**
     * Run the migrations.
     */
    public function up(): void
    {
        Schema::create("hashtag_postes", function (Blueprint $table) {
            $table->id("joindre");
            $table->dateTime("date_ajout"); 

            $table->unsignedBigInteger('id_poste');
            $table->foreign('id_poste')->references('id_poste')->on('postes')->onUpdate('cascade')->onDelete('cascade');


            $table->unsignedBigInteger('hashtag_id');
            $table->foreign('hashtag_id')->references('hashtag_id')->on('hashtags')->onUpdate('cascade')->onDelete('cascade');


            $table->timestamps();      
        });
    }

    /**
     * Reverse the migrations.
     */
    public function down(): void
    {
        //
    }
};
