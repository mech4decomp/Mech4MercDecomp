/*
 * FUN_0072D400 (121 B) — __cdecl teardown/cleanup routine.
 *
 * Frees the object at 0x896c88 via FUN_0072d7b0, walks a linked list
 * at 0x896b84 calling FreeLibrary (IAT 0x76b0b8) + FUN_006f4230,
 * then walks a list at 0x8bc00c calling FUN_00758b10 + FUN_004084e0,
 * and finally clears 0x8bc00c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0072d7b0(void);
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_00758b10(void);
extern void __cdecl FUN_004084e0(void);

extern int g_896c88;
extern int g_896b84;
extern int g_8bc00c;
extern int g_76b0b8;   /* IAT: FreeLibrary */

__declspec(naked) void __cdecl FUN_0072d400(void)
{
    __asm {
        mov     eax, dword ptr [g_896c88]
        push    ebx
        xor     ebx, ebx
        cmp     eax, ebx
        push    esi
        push    edi
        jz      L_72d41a
        push    eax
        call    FUN_0072d7b0
        mov     dword ptr [g_896c88], ebx
L_72d41a:
        mov     eax, dword ptr [g_896b84]
        cmp     eax, ebx
        jz      L_72d448
        mov     edi, dword ptr [g_76b0b8]
L_72d429:
        mov     esi, dword ptr [eax]
        mov     eax, dword ptr [eax + 0x4]
        push    eax
        call    edi
        mov     ecx, dword ptr [g_896b84]
        push    ecx
        call    FUN_006f4230
        cmp     esi, ebx
        mov     eax, esi
        mov     dword ptr [g_896b84], eax
        jnz     L_72d429
L_72d448:
        mov     esi, dword ptr [g_8bc00c]
        cmp     esi, ebx
        jz      L_72d46f
L_72d452:
        cmp     esi, ebx
        mov     edi, dword ptr [esi + 0x24]
        jz      L_72d469
        mov     ecx, esi
        call    FUN_00758b10
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_72d469:
        cmp     edi, ebx
        mov     esi, edi
        jnz     L_72d452
L_72d46f:
        pop     edi
        pop     esi
        mov     dword ptr [g_8bc00c], ebx
        pop     ebx
        ret
    }
}
