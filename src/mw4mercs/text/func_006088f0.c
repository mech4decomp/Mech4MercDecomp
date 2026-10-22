/*
 * FUN_006088f0 (214 B) — animation-blend/archive subsystem. Iterates an
 * object list (FUN_00416cc0) dispatching FUN_00609700, then walks a
 * linked list dispatching FUN_00609700 for matching entries.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab44;
extern int g_007dab40;

extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_00609700(void);
extern void __cdecl FUN_00416c60(void);
extern void __cdecl FUN_005dec20(void);

__declspec(naked) void FUN_006088f0(void)
{
    __asm {
        sub     esp, 0x14
        mov     eax, dword ptr [g_007dab44]
        push    ebx
        mov     ebx, dword ptr [g_007dab40]
        push    ebp
        mov     ebp, ecx
        mov     ecx, dword ptr [eax]
        xor     ecx, ebx
        mov     edx, dword ptr [ecx + 0x44]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0x2c]
        push    esi
        add     eax, 0x10
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_00416bc0
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0xc], 0x783958
        call    FUN_00416cc0
        test    eax, eax
        jz      L_60895d
        push    edi
L_608936:
        mov     esi, dword ptr [eax + 0x18]
        test    esi, esi
        jle     L_60894f
        mov     edi, dword ptr [eax + 0x10]
        mov     ebx, dword ptr [eax + 0x14]
L_608943:
        push    edi
        push    ebx
        mov     ecx, ebp
        call    FUN_00609700
        dec     esi
        jnz     L_608943
L_60894f:
        lea     ecx, [esp + 0x10]
        call    FUN_00416cc0
        test    eax, eax
        jnz     L_608936
        pop     edi
L_60895d:
        mov     ecx, dword ptr [g_007dab44]
        mov     esi, dword ptr [g_007dab40]
        mov     edx, dword ptr [ecx]
        xor     edx, esi
        mov     eax, dword ptr [edx + 0x44]
        xor     eax, 0x85739531
        mov     eax, dword ptr [eax + 0x38]
        mov     esi, dword ptr [eax + 0x10]
        add     eax, 0x10
        test    esi, esi
        jz      L_6089b6
L_60897e:
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        mov     esi, dword ptr [esi + 0x4]
        jz      L_6089b6
        mov     al, byte ptr [ecx + 0x24]
        test    al, al
        /* __emit: backward jz to L_60897e; MSVC6 miscomputes rel by +4 (call-reloc in loop) */
        __emit  0x74
        __emit  0xEC
        mov     eax, dword ptr [ecx + 0x6c]
        cmp     eax, -1
        jz      L_60899e
        test    eax, eax
        /* __emit: backward jnz to L_60897e; MSVC6 miscomputes rel by +4 */
        __emit  0x75
        __emit  0xE0
L_60899e:
        mov     eax, dword ptr [ecx + 0x10]
        push    eax
        call    FUN_005dec20
        add     eax, 0xc8
        push    eax
        mov     ecx, ebp
        call    FUN_00609700
        /* __emit: backward jmp to L_60897e; MSVC6 miscomputes rel by +4 */
        __emit  0xEB
        __emit  0xC8
L_6089b6:
        lea     ecx, [esp + 0xc]
        call    FUN_00416c60
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x14
        ret
    }
}
