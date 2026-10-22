/*
 * FUN_004FF180 (115 B) -- MLR/Adept OBB transform helper.
 * Transforms a matrix via FUN_00417d80 / FUN_004c8510 and clears a flag in
 * [param4+0x18].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00417d80(void);
extern void __cdecl FUN_004c8510(void);

extern char g_7dc955;    /* 0x007dc955 */

__declspec(naked) void __cdecl FUN_004ff180(void)
{
    __asm {
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [edi + 0x14]
        mov     eax, dword ptr [ecx + 0x128]
        test    eax, eax
        jz      L_4ff19c
        mov     dl, byte ptr [g_7dc955]
        test    dl, dl
        jz      L_4ff1a2
L_4ff19c:
        mov     eax, dword ptr [ecx + 0x124]
L_4ff1a2:
        test    eax, eax
        jz      L_4ff1ea
        mov     ecx, dword ptr [ecx + 0xd8]
        push    esi
        add     ecx, 0x80
        lea     esi, [eax + 0x50]
        push    ecx
        add     eax, 0x10
        push    eax
        mov     ecx, esi
        call    FUN_00417d80
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0xc]
        push    0x3f
        push    edx
        push    eax
        push    0x7dc930
        push    esi
        call    FUN_004c8510
        mov     eax, dword ptr [edi + 0x18]
        add     esp, 0x14
        and     eax, 0xffffc7ff
        pop     esi
        mov     dword ptr [edi + 0x18], eax
        pop     edi
        ret
L_4ff1ea:
        and     dword ptr [edi + 0x18], 0xffffc7ff
        pop     edi
        ret
    }
}
