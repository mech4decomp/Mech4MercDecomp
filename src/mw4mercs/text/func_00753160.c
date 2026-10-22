/* FUN_00753160 (0x00753160, 1332 B)
 * DirectInput effect-parameter string builder.
 * Appends flag-driven "DIEP_* " tokens (with "| " separators) into the global
 * buffer DAT_008b8e50 via an inline strcat, then returns the buffer.
 * __stdcall, RET 0x4.
 */

extern char g_8b8e50[];   /* DAT_008b8e50 */
extern char g_7ad544[];   /* "| " */
extern char g_7ada78[];   /* "DIEP_AXES " */
extern char g_7ada68[];   /* "DIEP_DIRECTION " */
extern char g_7ada58[];   /* "DIEP_DURATION " */
extern char g_7ada48[];   /* "DIEP_ENVELOPE " */
extern char g_7ada3c[];   /* "DIEP_GAIN " */
extern char g_7ada28[];   /* "DIEP_NODOWNLOAD " */
extern char g_7ada18[];   /* "DIEP_RESTART " */
extern char g_7ada04[];   /* "DIEP_SAMPLEPERIOD " */
extern char g_7ad9f8[];   /* "DIEP_START " */
extern char g_7ad9e4[];   /* "DIEP_STARTDELAY " */
extern char g_7ad9d0[];   /* "DIEP_TRIGGERBUTTON " */
extern char g_7ad9b4[];   /* "DIEP_TRIGGERREPEATINTERVAL " */
extern char g_7ad998[];   /* "DIEP_TYPESPECIFICPARAMS " */

__declspec(naked) char * FUN_00753160(unsigned int param_1)
{
    __asm {
        mov edx, dword ptr [esp+4]
        test dl, 20h
        push ebx
        push esi
        push edi
        mov byte ptr [g_8b8e50], 0
        jz L_axes_done

        /* append "DIEP_AXES " (buffer just cleared, no separator) */
        or ecx, 0ffffffffh
        xor eax, eax
        mov edi, offset g_7ada78
        repne scasb
        not ecx
        sub edi, ecx
        mov ebx, ecx
        or ecx, 0ffffffffh
        mov esi, edi
        mov edi, offset g_8b8e50
        repne scasb
        mov ecx, ebx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
    L_axes_done:

        test dl, 40h
        jz L_dir_done
        mov al, byte ptr [g_8b8e50]
        test al, al
        jz L_dir_nosep
        /* append "| " */
        or ecx, 0ffffffffh
        xor eax, eax
        mov edi, offset g_7ad544
        repne scasb
        not ecx
        sub edi, ecx
        mov ebx, ecx
        or ecx, 0ffffffffh
        mov esi, edi
        mov edi, offset g_8b8e50
        repne scasb
        mov ecx, ebx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
    L_dir_nosep:
        /* append "DIEP_DIRECTION " */
        or ecx, 0ffffffffh
        xor eax, eax
        mov edi, offset g_7ada68
        repne scasb
        not ecx
        sub edi, ecx
        mov ebx, ecx
        or ecx, 0ffffffffh
        mov esi, edi
        mov edi, offset g_8b8e50
        repne scasb
        mov ecx, ebx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
    L_dir_done:

        test dl, 1
        jz L_dur_done
        mov al, byte ptr [g_8b8e50]
        test al, al
        jz L_dur_nosep
        /* append "| " */
        or ecx, 0ffffffffh
        xor eax, eax
        mov edi, offset g_7ad544
        repne scasb
        not ecx
        sub edi, ecx
        mov ebx, ecx
        or ecx, 0ffffffffh
        mov esi, edi
        mov edi, offset g_8b8e50
        repne scasb
        mov ecx, ebx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
    L_dur_nosep:
        /* append "DIEP_DURATION " */
        or ecx, 0ffffffffh
        xor eax, eax
        mov edi, offset g_7ada58
        repne scasb
        not ecx
        sub edi, ecx
        mov ebx, ecx
        or ecx, 0ffffffffh
        mov esi, edi
        mov edi, offset g_8b8e50
        repne scasb
        mov ecx, ebx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
    L_dur_done:

        test dl, 80h
        jz L_env_done
        mov al, byte ptr [g_8b8e50]
        test al, al
        jz L_env_nosep
        /* append "| " */
        or ecx, 0ffffffffh
        xor eax, eax
        mov edi, offset g_7ad544
        repne scasb
        not ecx
        sub edi, ecx
        mov ebx, ecx
        or ecx, 0ffffffffh
        mov esi, edi
        mov edi, offset g_8b8e50
        repne scasb
        mov ecx, ebx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
    L_env_nosep:
        /* append "DIEP_ENVELOPE " */
        or ecx, 0ffffffffh
        xor eax, eax
        mov edi, offset g_7ada48
        repne scasb
        not ecx
        sub edi, ecx
        mov ebx, ecx
        or ecx, 0ffffffffh
        mov esi, edi
        mov edi, offset g_8b8e50
        repne scasb
        mov ecx, ebx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
    L_env_done:

        test dl, 4
        jz L_gain_done
        mov al, byte ptr [g_8b8e50]
        test al, al
        jz L_gain_nosep
        /* append "| " */
        or ecx, 0ffffffffh
        xor eax, eax
        mov edi, offset g_7ad544
        repne scasb
        not ecx
        sub edi, ecx
        mov ebx, ecx
        or ecx, 0ffffffffh
        mov esi, edi
        mov edi, offset g_8b8e50
        repne scasb
        mov ecx, ebx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
    L_gain_nosep:
        /* append "DIEP_GAIN " */
        or ecx, 0ffffffffh
        xor eax, eax
        mov edi, offset g_7ada3c
        repne scasb
        not ecx
        sub edi, ecx
        mov ebx, ecx
        or ecx, 0ffffffffh
        mov esi, edi
        mov edi, offset g_8b8e50
        repne scasb
        mov ecx, ebx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
    L_gain_done:

        test edx, 80000000h
        jz L_nodl_done
        mov al, byte ptr [g_8b8e50]
        test al, al
        jz L_nodl_nosep
        /* append "| " */
        or ecx, 0ffffffffh
        xor eax, eax
        mov edi, offset g_7ad544
        repne scasb
        not ecx
        sub edi, ecx
        mov ebx, ecx
        or ecx, 0ffffffffh
        mov esi, edi
        mov edi, offset g_8b8e50
        repne scasb
        mov ecx, ebx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
    L_nodl_nosep:
        /* append "DIEP_NODOWNLOAD " */
        or ecx, 0ffffffffh
        xor eax, eax
        mov edi, offset g_7ada28
        repne scasb
        not ecx
        sub edi, ecx
        mov ebx, ecx
        or ecx, 0ffffffffh
        mov esi, edi
        mov edi, offset g_8b8e50
        repne scasb
        mov ecx, ebx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
    L_nodl_done:

        test edx, 40000000h
        jz L_rest_done
        mov al, byte ptr [g_8b8e50]
        test al, al
        jz L_rest_nosep
        /* append "| " */
        or ecx, 0ffffffffh
        xor eax, eax
        mov edi, offset g_7ad544
        repne scasb
        not ecx
        sub edi, ecx
        mov ebx, ecx
        or ecx, 0ffffffffh
        mov esi, edi
        mov edi, offset g_8b8e50
        repne scasb
        mov ecx, ebx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
    L_rest_nosep:
        /* append "DIEP_RESTART " */
        or ecx, 0ffffffffh
        xor eax, eax
        mov edi, offset g_7ada18
        repne scasb
        not ecx
        sub edi, ecx
        mov ebx, ecx
        or ecx, 0ffffffffh
        mov esi, edi
        mov edi, offset g_8b8e50
        repne scasb
        mov ecx, ebx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
    L_rest_done:

        test dl, 2
        jz L_samp_done
        mov al, byte ptr [g_8b8e50]
        test al, al
        jz L_samp_nosep
        /* append "| " */
        or ecx, 0ffffffffh
        xor eax, eax
        mov edi, offset g_7ad544
        repne scasb
        not ecx
        sub edi, ecx
        mov ebx, ecx
        or ecx, 0ffffffffh
        mov esi, edi
        mov edi, offset g_8b8e50
        repne scasb
        mov ecx, ebx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
    L_samp_nosep:
        /* append "DIEP_SAMPLEPERIOD " */
        or ecx, 0ffffffffh
        xor eax, eax
        mov edi, offset g_7ada04
        repne scasb
        not ecx
        sub edi, ecx
        mov ebx, ecx
        or ecx, 0ffffffffh
        mov esi, edi
        mov edi, offset g_8b8e50
        repne scasb
        mov ecx, ebx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
    L_samp_done:

        test edx, 20000000h
        jz L_start_done
        mov al, byte ptr [g_8b8e50]
        test al, al
        jz L_start_nosep
        /* append "| " */
        or ecx, 0ffffffffh
        xor eax, eax
        mov edi, offset g_7ad544
        repne scasb
        not ecx
        sub edi, ecx
        mov ebx, ecx
        or ecx, 0ffffffffh
        mov esi, edi
        mov edi, offset g_8b8e50
        repne scasb
        mov ecx, ebx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
    L_start_nosep:
        /* append "DIEP_START " */
        or ecx, 0ffffffffh
        xor eax, eax
        mov edi, offset g_7ad9f8
        repne scasb
        not ecx
        sub edi, ecx
        mov ebx, ecx
        or ecx, 0ffffffffh
        mov esi, edi
        mov edi, offset g_8b8e50
        repne scasb
        mov ecx, ebx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
    L_start_done:

        test dh, 2
        jz L_sdel_done
        mov al, byte ptr [g_8b8e50]
        test al, al
        jz L_sdel_nosep
        /* append "| " */
        or ecx, 0ffffffffh
        xor eax, eax
        mov edi, offset g_7ad544
        repne scasb
        not ecx
        sub edi, ecx
        mov ebx, ecx
        or ecx, 0ffffffffh
        mov esi, edi
        mov edi, offset g_8b8e50
        repne scasb
        mov ecx, ebx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
    L_sdel_nosep:
        /* append "DIEP_STARTDELAY " */
        or ecx, 0ffffffffh
        xor eax, eax
        mov edi, offset g_7ad9e4
        repne scasb
        not ecx
        sub edi, ecx
        mov ebx, ecx
        or ecx, 0ffffffffh
        mov esi, edi
        mov edi, offset g_8b8e50
        repne scasb
        mov ecx, ebx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
    L_sdel_done:

        test dl, 8
        jz L_trig_done
        mov al, byte ptr [g_8b8e50]
        test al, al
        jz L_trig_nosep
        /* append "| " */
        or ecx, 0ffffffffh
        xor eax, eax
        mov edi, offset g_7ad544
        repne scasb
        not ecx
        sub edi, ecx
        mov ebx, ecx
        or ecx, 0ffffffffh
        mov esi, edi
        mov edi, offset g_8b8e50
        repne scasb
        mov ecx, ebx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
    L_trig_nosep:
        /* append "DIEP_TRIGGERBUTTON " */
        or ecx, 0ffffffffh
        xor eax, eax
        mov edi, offset g_7ad9d0
        repne scasb
        not ecx
        sub edi, ecx
        mov ebx, ecx
        or ecx, 0ffffffffh
        mov esi, edi
        mov edi, offset g_8b8e50
        repne scasb
        mov ecx, ebx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
    L_trig_done:

        test dl, 10h
        jz L_tri_done
        mov al, byte ptr [g_8b8e50]
        test al, al
        jz L_tri_nosep
        /* append "| " */
        or ecx, 0ffffffffh
        xor eax, eax
        mov edi, offset g_7ad544
        repne scasb
        not ecx
        sub edi, ecx
        mov ebx, ecx
        or ecx, 0ffffffffh
        mov esi, edi
        mov edi, offset g_8b8e50
        repne scasb
        mov ecx, ebx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
    L_tri_nosep:
        /* append "DIEP_TRIGGERREPEATINTERVAL " */
        or ecx, 0ffffffffh
        xor eax, eax
        mov edi, offset g_7ad9b4
        repne scasb
        not ecx
        sub edi, ecx
        mov ebx, ecx
        or ecx, 0ffffffffh
        mov esi, edi
        mov edi, offset g_8b8e50
        repne scasb
        mov ecx, ebx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
    L_tri_done:

        test dh, 1
        jz L_typ_done
        mov al, byte ptr [g_8b8e50]
        test al, al
        jz L_typ_nosep
        /* append "| " (uses EDX for length, not EBX) */
        or ecx, 0ffffffffh
        xor eax, eax
        mov edi, offset g_7ad544
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        or ecx, 0ffffffffh
        mov esi, edi
        mov edi, offset g_8b8e50
        repne scasb
        mov ecx, edx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
    L_typ_nosep:
        /* append "DIEP_TYPESPECIFICPARAMS " (uses EDX for length) */
        or ecx, 0ffffffffh
        xor eax, eax
        mov edi, offset g_7ad998
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        or ecx, 0ffffffffh
        mov esi, edi
        mov edi, offset g_8b8e50
        repne scasb
        mov ecx, edx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
    L_typ_done:

        pop edi
        pop esi
        mov eax, offset g_8b8e50
        pop ebx
        ret 4
    }
}
