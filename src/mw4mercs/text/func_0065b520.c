/*
 * FUN_0065b520 (275 B) — __thiscall (ECX = this), RET 0.
 * Updates a target selection / render state.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_7f25c0;   /* 0x007f25c0 */
extern unsigned int g_7f268c;   /* 0x007f268c */
extern unsigned int g_7f23b0;   /* 0x007f23b0 */

extern void *__cdecl FUN_005dd7a0(void *p);
extern void __cdecl FUN_0069eb70(int a, void *b);
extern void __cdecl FUN_004084e0(void *p);
extern void __cdecl FUN_0065ab00(void *a, int b);
extern char __cdecl FUN_00415230(int a);
extern void *__cdecl FUN_0041fd80(void);
extern void *__cdecl FUN_0065ab50(void *a, void *b, void *c);

__declspec(naked) void __stdcall FUN_0065b520(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        push    edi
        call    dword ptr [eax + 0x2C]
        test    al, al
        jz      L_b563
        lea     ecx, [esp + 0x10]
        push    ecx
        mov     ecx, dword ptr [esi + 0x4]
        call    FUN_005dd7a0
        mov     ecx, dword ptr [esi + 0xC]
        push    eax
        push    0x4
        call    FUN_0069eb70
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      L_b563
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_b563
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_b563:
        mov     edi, dword ptr [esi + 0x4]
        push    0x1
        push    edi
        call    FUN_0065ab00
        mov     eax, dword ptr [g_7f25c0]
        mov     ebx, dword ptr [esi + 0x8]
        mov     ecx, dword ptr [ebx + 0x4]
        add     esp, 0x8
        push    eax
        mov     byte ptr [edi + 0x614], 0x0
        mov     dword ptr [esi + 0x14], 0x0
        call    FUN_00415230
        cmp     al, 0x1
        jnz     L_b5e8
        mov     eax, dword ptr [ebx + 0x3B0]
        test    eax, eax
        jz      L_b5e8
        lea     ebp, [eax + 0x6A0]
        mov     ecx, ebp
        call    FUN_0041fd80
        test    eax, eax
        jz      L_b5e8
        mov     ecx, ebp
        call    FUN_0041fd80
        mov     ebp, eax
        mov     eax, dword ptr [g_7f268c]
        mov     ecx, dword ptr [ebp + 0x4]
        push    eax
        call    FUN_00415230
        cmp     al, 0x1
        jnz     L_b5e8
        test    dword ptr [edi + 0x4E0], 0xfffffffc
        jz      L_b5e5
        lea     ecx, [edi + 0x1C8]
        call    FUN_0041fd80
        cmp     eax, ebp
        jz      L_b5e8
L_b5e5:
        mov     dword ptr [esi + 0x14], ebp
L_b5e8:
        mov     eax, dword ptr [esi + 0x14]
        test    eax, eax
        jnz     L_b619
        mov     ebx, dword ptr [ebx + 0x2FC]
        test    ebx, ebx
        jz      L_b619
        mov     eax, dword ptr [g_7f23b0]
        mov     ecx, dword ptr [ebx + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jnz     L_b619
        lea     ecx, [ebx + 0x1C8]
        call    FUN_0041fd80
        mov     dword ptr [esi + 0x14], eax
L_b619:
        mov     edx, dword ptr [esi + 0xC]
        mov     eax, dword ptr [esi + 0x14]
        push    edx
        push    eax
        push    edi
        call    FUN_0065ab50
        add     esp, 0xC
        pop     edi
        mov     dword ptr [esi + 0x14], eax
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret
    }
}
