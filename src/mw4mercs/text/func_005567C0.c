/*
 * FUN_005567C0 (180 B) — Manages a counter at [this+0x3dc] and a
 * double-precision timer value at [this+0x418]. Increments/decrements
 * the counter based on state flags and parameter, clamping to [0, 1].
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 */

extern double __stdcall FUN_00707e70(int);

__declspec(naked) void __stdcall FUN_005567C0(int param1)
{
    

extern int DAT_0077d088;
__asm {
push    esi
        mov     esi, ecx
        mov     al, byte ptr [esi + 0x589]
        test    al, al
        jz      loc_flag_clear
        mov     eax, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [eax + 0x10]
        test    ecx, ecx
        jg      loc_flag_set_check
        dec     dword ptr [esi + 0x3DC]
loc_flag_set_check:
        mov     eax, dword ptr [esi + 0x3DC]
        test    eax, eax
        jge     loc_ret
        mov     dword ptr [esi + 0x3DC], 0x0
        pop     esi
        ret     0x4
loc_flag_clear:
        mov     ecx, dword ptr [esp + 0x8]
        mov     eax, dword ptr [ecx + 0x10]
        test    eax, eax
        jle     loc_decrement
        mov     edx, dword ptr [esi + 0x384]
        mov     eax, dword ptr [edx + 0x10]
        shr     eax, 0x13
        test    al, 0x1
        jz      loc_do_inc
        mov     al, byte ptr [esi + 0x5ac]
        test    al, al
        jz      loc_ret
loc_do_inc:
        mov     ecx, dword ptr [esi + 0x3DC]
        inc     ecx
        push    0x0
        mov     dword ptr [esi + 0x3DC], ecx
        call    FUN_00707e70
        fsub qword ptr [DAT_0077d088]
        fstp qword ptr [esi+0x418]
        jmp     loc_clamp_check
loc_decrement:
        dec     dword ptr [esi + 0x3DC]
loc_clamp_check:
        mov     eax, dword ptr [esi + 0x3DC]
        test    eax, eax
        jge     loc_clamp_upper
        mov     dword ptr [esi + 0x3DC], 0x0
loc_clamp_upper:
        mov     ecx, dword ptr [esi + 0x3DC]
        mov     eax, 0x1
        cmp     ecx, eax
        jle     loc_ret
        mov     dword ptr [esi + 0x3DC], eax
loc_ret:
        pop     esi
        ret     0x4
    }


}
