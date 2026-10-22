/*
 * FUN_00530690 (687 B) — __thiscall update/tick method.
 * Handles player connection state, team assignments, audio setup,
 * and music selection based on game state.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0060FE30(void);
extern void __cdecl FUN_004D40F0(int);
extern void __cdecl FUN_004D8F60(void);
extern void __fastcall FUN_00530360(int);
extern int __cdecl FUN_0053CAE0(int);
extern void __fastcall FUN_00530510(void);
extern void __cdecl FUN_0061B0B0(float);
extern int __cdecl FUN_0053C740(int);
extern void __cdecl FUN_00511C80(void);
extern void __cdecl FUN_00602BC0(float);
extern void __cdecl FUN_0060FFE0(void);
extern void __cdecl FUN_00511CA0(void);
extern void __cdecl FUN_005BB9C0(void);
extern int __cdecl FUN_004EBCF0(int, const char *, float, float, float, float);
extern int __cdecl FUN_004EBE90(int);
extern void __cdecl FUN_004F23E0(float);

/* extern data symbols for absolute-memory operands */
extern char DAT_007b6ecd;
extern int DAT_007dab44;
extern int DAT_007dab40;
extern char DAT_007ddd21;
extern int DAT_007dc574;
extern int DAT_007db094;
extern int DAT_007dd268;
extern int DAT_00858a38;
extern float DAT_0077b290;
extern int DAT_007ddd40;
extern int DAT_007dc868;

__declspec(naked) void __fastcall FUN_00530690(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     al, byte ptr [esi + 0x16]
        test    al, al
        push    edi
        jz      skip_flag_clear

        mov     al, byte ptr [esi + 0x17]
        test    al, al
        jz      skip_flag_clear
        mov     byte ptr [DAT_007b6ecd], 0

skip_flag_clear:
        mov     eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        push    ebp
        xor     ecx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        add     ecx, 0xf4
        mov     byte ptr [esi + 0x350c], 0
        call    FUN_0060FE30

        mov     edx, dword ptr [esp + 0x10]     ; param_1
        push    edx
        mov     ecx, esi
        call    FUN_004D40F0

        mov     al, byte ptr [DAT_007ddd21]
        test    al, al
        jnz     skip_d8f60

        mov     ecx, dword ptr [DAT_007dc574]
        call    FUN_004D8F60

skip_d8f60:
        mov     al, byte ptr [esi + 0x16]
        test    al, al
        jz      skip_player_loop

        mov     al, byte ptr [esi + 0x17]
        test    al, al
        jz      skip_first_connect

        mov     eax, dword ptr [esi + 0x50]
        mov     ecx, dword ptr [eax + 0x10]
        test    ecx, ecx
        jnz     skip_first_connect

        mov     edx, dword ptr [DAT_007db094]
        xor     ecx, ecx
        mov     cl, byte ptr [edx + 0x28]
        push    ecx
        mov     ecx, esi
        call    FUN_00530360

skip_first_connect:
        mov     edi, 1
        lea     ebp, [esi + 0x5574]

player_loop:
        cmp     byte ptr [ebp], 0
        jz      player_next

        mov     ecx, dword ptr [DAT_007db094]
        xor     eax, eax
        mov     al, byte ptr [ecx + 0x28]
        cmp     edi, eax
        jz      player_next

        push    edi
        mov     ecx, esi
        call    FUN_0053CAE0

        mov     al, byte ptr [esi + 0x17]
        test    al, al
        jz      player_next

        push    edi
        mov     ecx, esi
        call    FUN_00530360

player_next:
        inc     edi
        add     ebp, 0x2038
        cmp     edi, 0xff
        jl      player_loop

        mov     al, byte ptr [esi + 0x17]
        test    al, al
        jz      skip_30510

        mov     ecx, esi
        call    FUN_00530510

skip_30510:
        mov     ecx, dword ptr [esi + 0x307c]
        test    ecx, ecx
        jz      skip_bot_check

        push    0x3f800000
        call    FUN_0061B0B0

skip_bot_check:
        xor     ebp, ebp
        lea     edi, [esi + 0x353b]

bot_loop:
        mov     al, byte ptr [edi - 1]
        test    al, al
        jz      bot_next

        cmp     byte ptr [edi], 0
        jnz     bot_next

        push    ebp
        mov     ecx, esi
        call    FUN_0053C740
        mov     byte ptr [edi + 7], 1

bot_next:
        inc     ebp
        add     edi, 0x2038
        cmp     ebp, 0xff
        jl      bot_loop

skip_player_loop:
        mov     ecx, dword ptr [DAT_007dd268]
        test    ecx, ecx
        jz      skip_11c80
        call    FUN_00511C80

skip_11c80:
        mov     edx, dword ptr [DAT_007dab44]
        mov     ebp, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [edx]
        xor     eax, ebp
        mov     ecx, dword ptr [eax + 0xc]
        mov     edi, dword ptr [eax + 0x20]
        xor     ecx, 0x85739531
        mov     byte ptr [ecx + 0x14], 0

        mov     cl, byte ptr [esi + 0x16]
        xor     edi, 0x85739531
        test    cl, cl
        mov     dword ptr [DAT_00858a38], 0x538000

        pop     ebp
        jz      use_54

        mov     edx, dword ptr [eax + 0xc]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0x50]
        jmp     check_17

use_54:
        mov     eax, dword ptr [eax + 0xc]
        xor     eax, 0x85739531
        mov     eax, dword ptr [eax + 0x54]

check_17:
        mov     cl, byte ptr [esi + 0x17]
        test    cl, cl
        jz      skip_fp

        test    eax, eax
        jz      skip_fp

        mov     eax, dword ptr [eax + 0x94]
        test    eax, eax
        mov     dword ptr [esp + 0xc], eax
        jle     skip_fp

        fild    dword ptr [esp + 0xc]
        push    ecx
        mov     ecx, edi
        fmul    dword ptr [DAT_0077b290]
        fstp    dword ptr [esp]
        call    FUN_00602BC0

skip_fp:
        lea     ecx, [edi + 0x21e8]
        call    FUN_0060FFE0

        mov     ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [edx + 0xc]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x50]
        mov     eax, dword ptr [ecx + 0x10]
        test    eax, eax
        jz      call_bb9c0

        mov     ecx, dword ptr [DAT_007dd268]
        call    FUN_00511CA0
        jmp     after_call

call_bb9c0:
        call    FUN_005BB9C0

after_call:
        mov     eax, dword ptr [DAT_007ddd40]
        test    eax, eax
        jz      skip_callback
        call    eax

skip_callback:
        mov     eax, dword ptr [edi + 0x4ed0]
        cmp     eax, 1
        setz    cl
        cmp     eax, 3
        setz    dl
        test    cl, cl
        pop     edi
        pop     esi
        jnz     music_coliseum

        cmp     eax, 2
        jz      music_factory
        test    dl, dl
        jz      done
        jmp     music_jungle

music_coliseum:
        push    0x3f4ccccd
        push    0x3f000000
        push    0x3f800000
        push    0x3f800000
        push    0x77b26c                     ; "music\\ColiseumAmb_music.wav{handle}"
        jmp     play_music

music_factory:
        test    dl, dl
        jz      music_default

music_jungle:
        push    0x3f4ccccd
        push    0x3f000000
        push    0x3f800000
        push    0x3f800000
        push    0x77b248                     ; "music\\JungleAmb1_Music.wav{handle}"
        jmp     play_music

music_default:
        push    0x3f4ccccd
        push    0x3f000000
        push    0x3f800000
        push    0x3f800000
        push    0x77b224                     ; "music\\FactoryAmb_Music.wav{handle}"

play_music:
        push    0
        call    FUN_004EBCF0
        add     esp, 0x18
        test    eax, eax
        jz      done

        push    1
        mov     ecx, eax
        call    FUN_004EBE90

        mov     eax, dword ptr [DAT_007dc868]
        test    eax, eax
        jz      done

        mov     ecx, dword ptr [eax + 0x4c]
        test    ecx, ecx
        jbe     done

        mov     ecx, dword ptr [eax + 0x48]
        push    0x3ecccccd
        call    FUN_004F23E0

done:
        ret     4
    }
}
