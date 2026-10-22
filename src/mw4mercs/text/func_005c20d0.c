/*
 * FUN_005c20d0 (565 B) — __fastcall (ECX = this). Large update/dispatch
 * routine with FPU math, indirect virtual calls, and a 64-bit global
 * decrement at the end.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_005c44c0(void);
extern void __cdecl FUN_005dd750(int a);
extern char __cdecl FUN_00661ea0(void *a);
extern void __cdecl FUN_0065e620(void *a, void *b, int c, int d);
extern void __cdecl FUN_006613f0(void *a, void *b);
extern void __cdecl FUN_005c4330(int a, int b, int c);
extern void __cdecl FUN_00661e30(int a);
extern char __cdecl FUN_005db360(int a);
extern void __cdecl FUN_005cb000(void);
extern void __cdecl FUN_00661fc0(void);
extern void __cdecl FUN_005cac80(void);
extern void __cdecl FUN_005c2310(void);
extern void __cdecl FUN_005c4c20(void *a);
extern void __cdecl FUN_005c5110(void *a, int b);
extern void __cdecl FUN_005c7f70(void);
extern float DAT_0076c5b0;   /* 0x0076C5B0 — comparison constant */
extern int DAT_007f2390;
extern int DAT_007f22e8;
extern int DAT_007f2394;
extern int DAT_007f22ec;

__declspec(naked) void func_005c20d0(void)
{
    __asm {
        sub     esp, 0x8
        push    esi
        mov     esi, ecx
        test    dword ptr [esi + 0x4e0], 0xfffffffc
        push    edi
        jz      l_222d
        lea     edi, [esi + 0x1c8]
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jz      l_2220
        cmp     byte ptr [esi + 0x2f2], 0x1
        jnz     l_2220
        mov     al, byte ptr [esi + 0x2f9]
        test    al, al
        jnz     l_2220
        mov     ecx, edi
        call    FUN_0041fd80
        mov     eax, dword ptr [eax + 0x10]
        shr     eax, 0x13
        and     al, 0x1
        cmp     al, 0x1
        jnz     l_2140
        mov     ecx, esi
        call    FUN_005c44c0
        push    0x0
        mov     ecx, esi
        call    FUN_005dd750
        pop     edi
        pop     esi
        add     esp, 0x8
        ret
    l_2140:
        mov     ecx, dword ptr [esi + 0x4e0]
        push    ebx
        push    ebp
        lea     ebp, [esi + 0x508]
        push    ebp
        and     ecx, 0xfffffffc
        call    FUN_00661ea0
        cmp     al, 0x1
        jnz     l_21d5
        mov     edi, dword ptr [esi + 0x4e0]
        and     edi, 0xfffffffc
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        xor     ebx, ebx
        call    dword ptr [edx + 0x18]
        cmp     al, 0x1
        jnz     l_217a
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax + 0x4]
        mov     ebx, eax
    l_217a:
        mov     cl, byte ptr [esi + 0x51c]
        mov     edx, dword ptr [esi + 0x54c]
        mov     byte ptr [esp + 0x10], cl
        mov     ecx, esi
        mov     dword ptr [esp + 0x14], edx
        call    FUN_005c44c0
        mov     eax, dword ptr [esp + 0x10]
        push    0x0
        push    eax
        lea     ecx, [esi + 0x5a4]
        push    ecx
        push    ebp
        call    FUN_0065e620
        mov     ecx, eax
        call    FUN_006613f0
        push    eax
        mov     ecx, esi
        call    FUN_005c4330
        test    ebx, ebx
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [esi + 0x54c], edx
        jz      l_21d5
        mov     ecx, dword ptr [esi + 0x4e0]
        push    ebx
        and     ecx, 0xfffffffc
        call    FUN_00661e30
    l_21d5:
        push    0x1
        mov     ecx, esi
        call    FUN_005db360
        cmp     al, 0x1
        jnz     l_21e9
        mov     ecx, esi
        call    FUN_005cb000
    l_21e9:
        mov     ecx, dword ptr [esi + 0x4e0]
        and     ecx, 0xfffffffc
        mov     eax, dword ptr [ecx]
        push    ebp
        call    dword ptr [eax]
        push    0x1
        mov     ecx, esi
        call    FUN_005db360
        cmp     al, 0x1
        pop     ebp
        pop     ebx
        jnz     l_2214
        mov     ecx, dword ptr [esi + 0x4e0]
        and     ecx, 0xfffffffc
        call    FUN_00661fc0
    l_2214:
        mov     ecx, esi
        call    FUN_005cac80
        jmp     l_22d9
    l_2220:
        mov     ecx, esi
        call    FUN_005c44c0
        pop     edi
        pop     esi
        add     esp, 0x8
        ret
    l_222d:
        fld     dword ptr [esi + 0x590]
        fld     dword ptr [esi + 0x58c]
        fld     dword ptr [esi + 0x588]
        fld     st(0)
        fmul    st, st(1)
        fld     st(2)
        fmul    st, st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st, st(4)
        faddp   st(1), st(0)
        fcomp   dword ptr [DAT_0076c5b0]
        fstp    st(0)
        fnstsw  ax
        fstp    st(0)
        test    ah, 0x40
        fstp    st(0)
        jnz     l_226f
        mov     ecx, esi
        call    FUN_005c2310
        pop     edi
        pop     esi
        add     esp, 0x8
        ret
    l_226f:
        lea     ecx, [esi + 0x1c8]
        call    FUN_0041fd80
        test    eax, eax
        jz      l_229c
        lea     edi, [esi + 0x4fc]
        push    edi
        mov     ecx, esi
        call    FUN_005c4c20
        push    0x1
        push    edi
        mov     ecx, esi
        call    FUN_005c5110
        pop     edi
        pop     esi
        add     esp, 0x8
        ret
    l_229c:
        fld     dword ptr [esi + 0x620]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      l_22d9
        fld     dword ptr [esi + 0x61c]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      l_22d9
        mov     eax, dword ptr [esi + 0x364]
        test    eax, eax
        jz      l_22d2
        cmp     dword ptr [eax + 0x8], 0x1
        jz      l_22d9
    l_22d2:
        mov     ecx, esi
        call    FUN_005c7f70
    l_22d9:
        mov     edx, dword ptr [DAT_007f2390]
        mov     ecx, dword ptr [DAT_007f22e8]
        mov     eax, dword ptr [DAT_007f2394]
        sub     edx, ecx
        mov     dword ptr [DAT_007f2390], edx
        mov     edx, dword ptr [DAT_007f22ec]
        sbb     eax, edx
        pop     edi
        mov     dword ptr [DAT_007f2394], eax
        pop     esi
        add     esp, 0x8
        ret
    }
}
