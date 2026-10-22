/*
 * FUN_00600B70 (124 B) — __cdecl, two stack params. Returns float in ST0.
 *
 * Loads a global pointer, XORs with another global, reads param_1's byte,
 * zeroes *param_2, then calls FUN_004cdfa0 / FUN_004ceeb0 / FUN_00415230.
 * On any failure returns the float at DAT_0076d598; on success returns
 * *(float*)(result+0x3b8) and stores result in *param_2.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_004cdfa0(int v);
extern int __cdecl FUN_004ceeb0(int v);
extern char __cdecl FUN_00415230(int v);

extern int g_007dab44;
extern int g_007dab40;
extern float g_0076d598;
extern int g_007f268c;

__declspec(naked) float __stdcall FUN_00600b70(char *param_1, int *param_2)
{
    __asm {
        mov     eax, dword ptr [g_007dab44]
        mov     eax, dword ptr [eax]
        push    esi
        mov     esi, dword ptr [g_007dab40]
        xor     ecx, ecx
        xor     eax, esi
        mov     esi, dword ptr [esp + 0x8]
        mov     cl, byte ptr [esi]
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        mov     dword ptr [edi], 0x0
        push    ecx
        mov     ecx, dword ptr [eax + 0x14]
        xor     ecx, 0x85739531
        call    FUN_004cdfa0
        test    eax, eax
        jnz     l_baf
        fld     dword ptr [g_0076d598]
        pop     edi
        pop     esi
        ret
    l_baf:
        push    esi
        mov     ecx, eax
        call    FUN_004ceeb0
        mov     esi, eax
        test    esi, esi
        jnz     l_bc6
        fld     dword ptr [g_0076d598]
        pop     edi
        pop     esi
        ret
    l_bc6:
        mov     eax, dword ptr [g_007f268c]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jnz     l_be1
        fld     dword ptr [g_0076d598]
        pop     edi
        pop     esi
        ret
    l_be1:
        fld     dword ptr [esi + 0x3b8]
        mov     dword ptr [edi], esi
        pop     edi
        pop     esi
        ret
    }
}
