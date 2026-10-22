/*
 * FUN_005c2790 (459 B) — __thiscall (ECX = this), RET 0x4 (1 stack arg).
 * Complex dispatch with FPU comparisons, indirect virtual calls, and
 * several helper calls.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_00707e70(int a);
extern char __cdecl FUN_00415230(int a);
extern void __cdecl FUN_00590df0(void);
extern void __cdecl FUN_005c3da0(void *a);
extern void __cdecl FUN_005c8110(void *a);
extern char __cdecl FUN_005c0e80(void);
extern char __cdecl FUN_005c25a0(void *a, void *b);
extern float __cdecl FUN_005c7ed0(void);
extern char __cdecl FUN_005c77d0(void *a, float b);
extern char __cdecl FUN_005c5650(void *a);
extern char __cdecl FUN_005c24d0(void *a, void *b, int c);
extern void __cdecl FUN_005c0ea0(int a);
extern void __cdecl FUN_005c2960(void *a);

__declspec(naked) void func_005c2790(void)
{
    

extern int DAT_0076c5b0;
extern int DAT_007f1f84;
__asm {
push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        lea     ebx, [esi + 0x1c8]
        push    edi
        mov     ecx, ebx
        call    FUN_0041fd80
        test    eax, eax
        jz      l_2954
        cmp     byte ptr [esi + 0x544], 0x1
        jz      l_2954
        fld     dword ptr [esi + 0x564]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jnz     l_27eb
        push    0x0
        call    FUN_00707e70
        fld     dword ptr [esi + 0x560]
        fadd    dword ptr [esi + 0x564]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jz      l_2954
    l_27eb:
        mov     ebp, dword ptr [esi + 0x170]
        cmp     byte ptr [ebp + 0x2f8], 0x1
        jz      l_2954
        mov eax, dword ptr [DAT_007f1f84]
        mov     ecx, dword ptr [ebp + 0x4]
        push    eax
        call    FUN_00415230
        cmp     al, 0x1
        jnz     l_2817
        mov     ecx, ebp
        call    FUN_00590df0
    l_2817:
        cmp     dword ptr [esp + 0x14], 0x1
        lea     edi, [esi + 0x640]
        jz      l_282a
        lea     edi, [esi + 0x644]
    l_282a:
        mov     ecx, dword ptr [ebp + 0x40c]
        mov     eax, dword ptr [ebp + 0x410]
        sub     eax, ecx
        sar     eax, 0x2
        cmp     eax, 0x1
        push    edi
        mov     ecx, esi
        jbe     l_284f
        call    FUN_005c3da0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
    l_284f:
        call    FUN_005c8110
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [edx + 0x8]
        cmp     al, 0x1
        jnz     l_293f
        lea     ebp, [esi + 0x658]
        mov     ecx, ebp
        mov     dword ptr [esp + 0x14], ebp
        call    FUN_005c0e80
        cmp     al, 0x1
        jnz     l_293f
        mov     ecx, ebx
        call    FUN_0041fd80
        push    eax
        push    edi
        mov     ecx, esi
        call    FUN_005c25a0
        cmp     al, 0x1
        jnz     l_293f
        mov     ecx, dword ptr [esi + 0x4e0]
        test    ecx, 0xfffffffc
        jz      l_28ae
        and     ecx, 0xfffffffc
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x14]
        cmp     al, 0x1
        jz      l_28d2
    l_28ae:
        mov     ecx, ebx
        call    FUN_0041fd80
        mov     ecx, esi
        mov     ebp, eax
        call    FUN_005c7ed0
        push    ecx
        fstp    dword ptr [esp]
        push    ebp
        mov     ecx, esi
        call    FUN_005c77d0
        cmp     al, 0x1
        jnz     l_2926
        mov     ebp, dword ptr [esp + 0x14]
    l_28d2:
        mov     ecx, ebx
        call    FUN_0041fd80
        push    eax
        mov     ecx, esi
        call    FUN_005c5650
        mov     byte ptr [esp + 0x14], al
        mov     ecx, dword ptr [esp + 0x14]
        push    ecx
        mov     ecx, ebx
        call    FUN_0041fd80
        push    eax
        push    edi
        mov     ecx, esi
        call    FUN_005c24d0
        cmp     al, 0x1
        jnz     l_290e
        push    0x1
        mov     ecx, ebp
        call    FUN_005c0ea0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
    l_290e:
        push    0x0
        mov     ecx, ebp
        call    FUN_005c0ea0
        push    edi
        mov     ecx, esi
        call    FUN_005c2960
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
    l_2926:
        push    edi
        mov     ecx, esi
        mov     dword ptr [esi + 0x54c], 0x0
        call    FUN_005c2960
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
    l_293f:
        push    0x0
        call    FUN_00707e70
        fstp    dword ptr [esi + 0x54c]
        push    edi
        mov     ecx, esi
        call    FUN_005c2960
    l_2954:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
    }


}
