/*
 * FUN_00680730 (232 B) — __thiscall (ECX = this), RET 0x10 (4 stack params).
 *
 * Dictionary page decode: calls FUN_0041eb40, updates counters in a global
 * table, and if a condition holds, decodes via FUN_00416bc0/FUN_00416d50,
 * asserts via FUN_006fab90, and calls FUN_0067fdf0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7dab44;                 /* DAT_007dab44 */
extern int g_7dab40;                 /* DAT_007dab40 */
extern int g_7db090;                 /* DAT_007db090 */
extern void __stdcall FUN_0041eb40(void *a, int b);   /* __thiscall: ECX=this */
extern void __stdcall FUN_00416bc0(void *a);          /* __thiscall: ECX=this */
extern int  __stdcall FUN_00416d50(void *a);          /* __thiscall: ECX=this */
extern int  __cdecl FUN_006fab90(const char *s);
extern void __stdcall FUN_0067fdf0(int a, int b, int c, int d, int e, int f);
extern void __stdcall FUN_00416c60(void);             /* __thiscall: ECX=this */

__declspec(naked) void __stdcall FUN_00680730(int param_1, int param_2, int param_3, int param_4)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x18
        push    ebx
        mov     ebx, dword ptr [ebp + 0xc]
        push    esi
        push    edi
        push    0x8
        lea     eax, [ebp - 0x4]
        mov     esi, ecx
        push    eax
        mov     ecx, ebx
        mov     dword ptr [ebp - 0x4], 0x0
        call    FUN_0041eb40
        mov     edx, dword ptr [g_7dab44]
        mov     eax, dword ptr [edx]
        mov     edx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [esi + 0x28]
        xor     eax, edx
        mov     edx, dword ptr [eax + 0x14]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0x1814]
        mov     edi, dword ptr [eax + ecx*0x4 + 0x1820]
        add     eax, 0x1818
        mov     edx, 0x4
        add     edi, edx
        mov     dword ptr [eax + ecx*0x4 + 0x8], edi
        mov     edi, dword ptr [eax + 0xc00]
        mov     ecx, dword ptr [esi + 0x24]
        add     edi, edx
        mov     dword ptr [eax + 0xc00], edi
        mov     eax, dword ptr [ebp - 0x4]
        cmp     eax, ecx
        jnz     L_8080F
        lea     ecx, [esi + 0x10]
        push    ecx
        lea     ecx, [ebp - 0x18]
        call    FUN_00416bc0
        mov     edx, dword ptr [ebp + 0x8]
        lea     eax, [ebp + 0xc]
        add     edx, -0x59
        push    eax
        lea     ecx, [ebp - 0x18]
        mov     dword ptr [ebp - 0x18], 0x798950
        mov     dword ptr [ebp + 0xc], edx
        call    FUN_00416d50
        mov     edi, eax
        test    edi, edi
        jnz     L_807E3
        push    0x798990
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_807E3
        int     3
L_807E3:
        mov     ecx, dword ptr [esi + 0x30]
        mov     edx, dword ptr [esi + 0x2c]
        push    ecx
        mov     ecx, dword ptr [g_7db090]
        xor     eax, eax
        mov     al, byte ptr [ecx + 0x28]
        push    edx
        mov     edx, dword ptr [ebp + 0x14]
        mov     ecx, edi
        push    eax
        mov     eax, dword ptr [ebp + 0x10]
        push    edx
        push    eax
        push    ebx
        call    FUN_0067fdf0
        lea     ecx, [ebp - 0x18]
        call    FUN_00416c60
L_8080F:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x10
    }
}
