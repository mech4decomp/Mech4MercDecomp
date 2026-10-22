/*
 * FUN_0063b030 (108 B) — Lookup/validation helper.
 *
 * XORs two globals to derive a keyed pointer, calls FUN_004fcb30, then
 * validates via FUN_00415230 and FUN_005faef0, writing a value through
 * a caller-supplied pointer on success.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_004fcb30(int a);
extern char __cdecl FUN_00415230(int a);
extern int __cdecl FUN_005faef0(void);

extern int g_7dab44;   /* 0x007DAB44 */
extern int g_7dab40;   /* 0x007DAB40 */
extern int g_7f268c;   /* 0x007F268C */

__declspec(naked) int __cdecl FUN_0063b030(int param_1, int *param_2)
{
    __asm {
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [g_7dab40]
        mov     eax, dword ptr [eax]
        xor     eax, ecx
        mov     ecx, dword ptr [esp + 4]
        push    esi
        push    ecx
        mov     ecx, dword ptr [eax + 0x10]
        xor     ecx, 0x85739531
        call    FUN_004fcb30
        mov     esi, eax
        test    esi, esi
        jz      l_6b
        mov     eax, dword ptr [g_7f268c]
        mov     ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jnz     l_6f
    l_6b:
        xor     al, al
        pop     esi
        ret
    l_6f:
        mov     ecx, esi
        call    FUN_005faef0
        mov     edx, dword ptr [eax + 4]
        sub     edx, dword ptr [eax]
        test    edx, 0xfffffffc
        jnz     l_87
        xor     al, al
        pop     esi
        ret
    l_87:
        mov     ecx, esi
        call    FUN_005faef0
        mov     eax, dword ptr [eax]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [esp + 0xc]
        mov     dword ptr [edx], ecx
        mov     al, 1
        pop     esi
        ret
    }
}
