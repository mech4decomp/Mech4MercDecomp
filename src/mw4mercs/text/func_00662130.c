/*
 * FUN_00662130 (109 B) — __cdecl, returns float (ST0). ABL candidate scan:
 * walks a linked list at [obj+0x3f8], calls FUN_0050e1b0 on each node's
 * [0x1ac], and returns _DAT_0076d064 if a string predicate (FUN_00415230)
 * matches, else _DAT_0076c5b0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007f2540;
extern int g_007f253c;
extern float g_0076d064;
extern float g_0076c5b0;

extern int __cdecl FUN_0050e1b0(int);
extern char __cdecl FUN_00415230(int);

__declspec(naked) void FUN_00662130(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        mov     eax, dword ptr [ecx]
        push    esi
        push    edi
        call    dword ptr [eax + 0x34]
        mov     edi, dword ptr [eax + 0x3f8]
        add     eax, 0x3f8
L_62146:
        test    edi, edi
        jz      L_62194
        mov     esi, dword ptr [edi]
        test    esi, esi
        mov     edi, dword ptr [edi + 0x4]
        jz      L_62194
        mov     ecx, dword ptr [esi + 0x1ac]
        push    ecx
        call    FUN_0050e1b0
        add     esp, 0x4
        test    eax, eax
        jle     L_62146
        mov     eax, dword ptr [g_007f2540]
        mov     esi, dword ptr [esi + 0x4]
        push    eax
        mov     ecx, esi
        call    FUN_00415230
        cmp     al, 0x1
        jz      L_6218b
        mov     eax, dword ptr [g_007f253c]
        push    eax
        mov     ecx, esi
        call    FUN_00415230
        cmp     al, 0x1
        jnz     L_62146
L_6218b:
        fld     dword ptr [g_0076d064]
        pop     edi
        pop     esi
        ret
L_62194:
        fld     dword ptr [g_0076c5b0]
        pop     edi
        pop     esi
        ret
    }
}
