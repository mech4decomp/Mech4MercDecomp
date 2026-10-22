/*
 * FUN_0060D590 (583 B) — __thiscall (ECX = this), RET 0xC, 3 stack params.
 * Animation-blend subsystem: looks up an existing blend object via
 * FUN_00416b60(this+0x18, param_1); if found, builds a local key, resolves
 * a table entry, initializes a local object, and drives the animation
 * pipeline (virtual calls on the object and on this->[4]). Handles
 * refcounted sub-objects (inc/dec + free via FUN_004084e0) and a final
 * FUN_0060fcf0() dispatch.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416b60(void);
extern void __cdecl FUN_004da920(void);
extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_0060d7e0(void);
extern void __cdecl FUN_00523e60(void);
extern void __cdecl FUN_004cec10(void);
extern void __cdecl FUN_004d9910(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_004e7820(void);
extern void __cdecl FUN_004e7960(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_004084e0(void *ptr);
extern void __cdecl FUN_0060d510(void);
extern void __cdecl FUN_0041ef60(void);
extern void __cdecl FUN_0060fcf0(void);

extern int   g_7b8c0c;   /* DAT_007b8c0c */
extern int   g_7db090;   /* DAT_007db090 */
extern int   g_7f25a8;   /* DAT_007f25a8 */
extern int   g_7dab44;   /* DAT_007dab44 */
extern int   g_7dab40;   /* DAT_007dab40 */

__declspec(naked) void __fastcall FUN_0060D590(void)
{
    __asm {
        sub     esp, 0x30
        push    ebx
        push    ebp
        push    esi
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0x4]
        test    eax, eax
        push    edi
        mov     edi, dword ptr [esp + 0x4c]
        mov     dword ptr [edi], 0x1
        jz      L_772
        mov     eax, dword ptr [esp + 0x44]
        push    eax
        lea     ecx, [ebx + 0x18]
        call    FUN_00416b60
        mov     esi, eax
        test    esi, esi
        jz      L_7C7
        mov     cx, word ptr [esi + 0x10]
        mov     dx, word ptr [esi + 0x12]
        lea     eax, [esp + 0x10]
        push    eax
        mov     word ptr [esp + 0x14], cx
        mov     word ptr [esp + 0x16], dx
        call    FUN_004da920
        mov     ecx, dword ptr [g_7b8c0c]
        mov     edi, dword ptr [ecx + eax*4]
        add     esp, 0x4
        push    0x0
        lea     ecx, [esp + 0x1c]
        call    FUN_0041ee70
        lea     edx, [esp + 0x18]
        push    edx
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, esi
        call    FUN_0060d7e0
        push    ecx
        mov     ecx, esp
        push    eax
        call    FUN_00523e60
        call    dword ptr [edi + 0xa4]
        mov     ecx, dword ptr [g_7db090]
        add     esp, 0x8
        call    FUN_004cec10
        mov     cl, byte ptr [eax]
        mov     edi, dword ptr [esp + 0x48]
        mov     byte ptr [esp + 0x14], cl
        mov     dx, word ptr [eax + 0x2]
        mov     al, byte ptr [edi]
        mov     ecx, dword ptr [esp + 0x2c]
        mov     word ptr [esp + 0x16], dx
        push    0x1
        lea     edx, [esp + 0x18]
        mov     byte ptr [ecx + 0x64], al
        push    edx
        lea     eax, [esp + 0x20]
        push    eax
        call    FUN_004d9910
        mov     esi, eax
        mov     eax, dword ptr [g_7f25a8]
        mov     ecx, dword ptr [esi + 0x4]
        add     esp, 0xc
        push    eax
        call    FUN_00415230
        test    al, al
        jz      L_72E
        mov     ecx, dword ptr [ebx + 0x4]
        push    edi
        add     ecx, 0x384
        call    FUN_00416b60
        mov     edi, eax
        mov     ecx, edi
        call    FUN_004e7820
        mov     ebp, eax
        test    ebp, ebp
        jnz     L_6B1
        test    esi, esi
        mov     ecx, dword ptr [esp + 0x4c]
        mov     dword ptr [ecx], eax
        jz      L_69E
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx]
L_69E:
        lea     ecx, [esp + 0x18]
        call    FUN_0041ef60
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x30
        ret     0xc
L_6B1:
        mov     ecx, edi
        call    FUN_004e7960
        test    eax, eax
        jz      L_6F5
        mov     eax, dword ptr [eax + 0x44]
        test    eax, eax
        mov     dword ptr [esp + 0x48], eax
        jz      L_6CA
        inc     byte ptr [eax - 0x1]
L_6CA:
        lea     eax, [esp + 0x48]
        push    eax
        lea     ecx, [esi + 0x18c]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x48]
        test    eax, eax
        jz      L_6F5
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_6F5
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_6F5:
        mov     eax, dword ptr [ebp + 0x44]
        test    eax, eax
        mov     dword ptr [esp + 0x48], eax
        jz      L_703
        inc     byte ptr [eax - 0x1]
L_703:
        lea     ecx, [esp + 0x48]
        push    ecx
        lea     ecx, [esi + 0x188]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x48]
        test    eax, eax
        jz      L_72E
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_72E
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_72E:
        mov     edi, dword ptr [ebx + 0x4]
        mov     edx, dword ptr [edi]
        push    esi
        mov     ecx, edi
        call    dword ptr [edx + 0x28]
        mov     eax, dword ptr [edi]
        push    0x1
        mov     ecx, edi
        call    dword ptr [eax + 0x48]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0xa0]
        test    al, al
        jz      L_79E
        mov     eax, dword ptr [edi]
        push    esi
        mov     ecx, edi
        call    dword ptr [eax + 0x100]
        mov     ecx, dword ptr [esp + 0x44]
        mov     edx, dword ptr [ecx]
        push    edx
        mov     ecx, ebx
        call    FUN_0060d510
        lea     ecx, [esp + 0x18]
        call    FUN_0041ef60
L_772:
        mov     edx, dword ptr [g_7dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_7dab40]
        mov     ecx, dword ptr [eax + 0xc]
        xor     ecx, 0x85739531
        add     ecx, 0xf4
        call    FUN_0060fcf0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x30
        ret     0xc
L_79E:
        test    esi, esi
        jz      L_7AA
        mov     eax, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [eax]
L_7AA:
        mov     ecx, dword ptr [esp + 0x4c]
        mov     dword ptr [ecx], 0x0
        lea     ecx, [esp + 0x18]
        call    FUN_0041ef60
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x30
        ret     0xc
L_7C7:
        mov     dword ptr [edi], 0x0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x30
        ret     0xc
    }
}
