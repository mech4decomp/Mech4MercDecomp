/*
 * FUN_0053093F (85 B) — __thiscall (1 stack arg, RET 4). If [this+0x16] is
 * set, loops esi=1..0xFF over a 0x2038-stride table at [this+0x5575],
 * calling FUN_00538B20 for non-empty entries whose index != g_7DB094->0x28.
 * Then calls FUN_004D4140 with the arg.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00538B20(void);
extern void __cdecl FUN_004D4140(void);
extern int g_7db094;

__declspec(naked) void FUN_0053093F(void)
{
    __asm {
        nop
        push    ebx
        mov     ebx, ecx
        mov     al, byte ptr [ebx + 0x16]
        test    al, al
        je      loc_530984
        push    esi
        push    edi
        mov     esi, 1
        lea     edi, [ebx + 0x5575]
loc_530957:
        cmp     byte ptr [edi], 0
        je      loc_530973
        mov     ecx, dword ptr [g_7db094]
        xor     eax, eax
        mov     al, byte ptr [ecx + 0x28]
        cmp     esi, eax
        je      loc_530973
        push    esi
        mov     ecx, ebx
        call    FUN_00538B20
loc_530973:
        inc     esi
        add     edi, 0x2038
        cmp     esi, 0xff
        jl      loc_530957
        pop     edi
        pop     esi
loc_530984:
        mov     edx, dword ptr [esp + 8]
        push    edx
        mov     ecx, ebx
        call    FUN_004D4140
        pop     ebx
        ret     4
    }
}
