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
        Schema::create("medias", function (Blueprint $table) {
            $table->id("id_media");
            $table->string("path_media");
            $table->string("type_media");
            $table->unsignedBigInteger('id_poste');
            $table->foreign('id_poste')->references('id_poste')->on('postes');
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
