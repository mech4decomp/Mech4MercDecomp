/*
 * FUN_004e23c0 (272 B) — MLR/Adept renderer teardown (__thiscall).
 * Releases the renderer's sub-objects, texture resources, and globals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004c8e90(void);
extern void __cdecl FUN_006d1010(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_006d2ac0(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_00417980(void);
extern void __cdecl FUN_004d9db0(void);

extern int g_00840048;
extern int g_0084004c;
extern int g_007dc728;
extern int g_007b9648;
extern int g_007b967c;

__declspec(naked) void FUN_004e23c0(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     ebx, ecx
        push    7
        mov     dword ptr [ebx], 0x773d24
        call    FUN_004c8e90
        mov     esi, dword ptr [ebx+0xbc]
        add     esp, 4
        xor     edi, edi
L_23dd:
        cmp     esi, edi
        jz      L_23f1
        mov     ecx, dword ptr [esi]
        cmp     ecx, edi
        mov     esi, dword ptr [esi+4]
        jz      L_23f1
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax+0x38]
        jmp     L_23dd
L_23f1:
        mov     esi, dword ptr [g_00840048]
        cmp     esi, edi
        jz      L_2411
        mov     ecx, esi
        call    FUN_006d1010
        push    esi
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [g_00840048], edi
L_2411:
        mov     esi, dword ptr [g_0084004c]
        cmp     esi, edi
        jz      L_2431
        mov     ecx, esi
        call    FUN_006d2ac0
        push    esi
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [g_0084004c], edi
L_2431:
        mov     ecx, dword ptr [ebx+0x17c]
        cmp     ecx, edi
        jz      L_2441
        mov     edx, dword ptr [ecx]
        push    3
        call    dword ptr [edx]
L_2441:
        mov     ecx, dword ptr [g_007dc728]
        cmp     ecx, edi
        jz      L_2451
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L_2451:
        mov     ecx, dword ptr [g_007b9648]
        cmp     ecx, edi
        mov     dword ptr [g_007dc728], edi
        jz      L_246d
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
        mov     dword ptr [g_007b9648], edi
L_246d:
        mov     ecx, dword ptr [g_007b967c]
        cmp     ecx, edi
        jz      L_2491
        dec     word ptr [ecx+0x10]
        cmp     word ptr [ecx+0x10], di
        jnz     L_248b
        cmp     ecx, edi
        jz      L_248b
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L_248b:
        mov     dword ptr [g_007b967c], edi
L_2491:
        mov     eax, dword ptr [ebx+0x1dc]
        cmp     eax, edi
        jz      L_24a4
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_24a4:
        lea     ecx, [ebx+0x194]
        call    FUN_004d21c0
        lea     ecx, [ebx+0x18c]
        call    FUN_00417980
        lea     ecx, [ebx+0x184]
        call    FUN_00417980
        mov     ecx, ebx
        call    FUN_004d9db0
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
