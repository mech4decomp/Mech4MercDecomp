/*
 * FUN_005e9a50 (420 B) — __thiscall (ECX = this), RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004d1f80(void *a, int b);
extern void *__stdcall FUN_004da920(void *param);
extern void __stdcall FUN_0041fde0(void *a, int b, int c, int d);
extern void __stdcall FUN_00534630(int a, int b, int c, int d);
extern void __stdcall FUN_004ea0f0(void *param);
extern void __stdcall FUN_00428850(void *param);
extern void __stdcall FUN_0041e690(void *a, void *b, int c);
extern void *__stdcall FUN_004cec10(void);
extern void *__stdcall FUN_004d9910(void *a, void *b, int c);
extern void *__stdcall FUN_0041fd80(void *param);
extern void __stdcall FUN_0041e710(void *param);
extern void __stdcall FUN_004d21c0(void *param);

__declspec(naked) void __stdcall FUN_005e9a50(void)
{
    

extern int DAT_007db0ac;
extern int DAT_007db0ae;
extern int DAT_007db098;
__asm {
sub     esp, 0xfc
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0x78]
        lea     ecx, [ebx + 0x78]
        push    ebp
        call    dword ptr [eax + 0x4]
        mov     cx, word ptr [eax + 0x24]
        cmp cx, word ptr [DAT_007db0ac]
        lea     ebp, [eax + 0x24]
        jnz     L_9A84
        mov     dx, word ptr [ebp + 0x2]
        cmp dx, word ptr [DAT_007db0ae]
        jz      L_9BEB
L_9A84:
        push    esi
        push    edi
        push    0x1
        push    ebp
        lea     ecx, [esp + 0xd0]
        call    FUN_004d1f80
        push    ebp
        call    FUN_004da920
        add     esp, 0x4
        push    0x2
        push    0x0
        mov     dword ptr [esp + 0x1c], eax
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        lea     edi, [esp + 0x80]
        push    0x1
        lea     eax, [ebx + 0x19c]
        rep     movsd
        push    eax
        lea     ecx, [esp + 0x88]
        call    FUN_0041fde0
        mov     ecx, dword ptr [ebx + 0x17c]
        mov     edx, dword ptr [ebx + 0x180]
        mov     eax, dword ptr [ebx + 0x184]
        push    0x0
        push    0x2
        push    0x90
        mov     dword ptr [esp + 0x90], ecx
        push    0x2
        lea     ecx, [esp + 0x28]
        mov     dword ptr [esp + 0xa4], edx
        mov     dword ptr [esp + 0xb4], eax
        call    FUN_00534630
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x28], ecx
        push    0x7dc694
        lea     ecx, [esp + 0x34]
        mov     dword ptr [esp + 0x30], 0x2
        call    FUN_004ea0f0
        lea     edx, [esp + 0x78]
        push    edx
        lea     ecx, [esp + 0x38]
        call    FUN_00428850
        mov     ax, word ptr [ebp]
        mov     edx, dword ptr [esp + 0x18]
        mov     cx, word ptr [ebp + 0x2]
        push    0x0
        mov     word ptr [esp + 0x70], ax
        push    edx
        lea     eax, [esp + 0x20]
        mov     word ptr [esp + 0x76], cx
        push    eax
        lea     ecx, [esp + 0xb4]
        mov     dword ptr [esp + 0x70], 0x1
        mov     dword ptr [esp + 0x74], 0x0
        mov     dword ptr [esp + 0x7c], 0x0
        mov     dword ptr [esp + 0x80], 0xffffffff
        call    FUN_0041e690
        mov ecx, dword ptr [DAT_007db098]
        call    FUN_004cec10
        mov     cl, byte ptr [eax]
        mov     byte ptr [esp + 0x10], cl
        mov     dx, word ptr [eax + 0x2]
        push    0x0
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0xb0]
        push    ecx
        mov     word ptr [esp + 0x1e], dx
        call    FUN_004d9910
        add     esp, 0xc
        lea     ecx, [ebx + 0x194]
        mov     esi, eax
        call    FUN_0041fd80
        mov     edx, dword ptr [eax]
        push    esi
        mov     ecx, eax
        call    dword ptr [edx + 0x28]
        mov     eax, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [eax + 0x48]
        lea     ecx, [esp + 0xa8]
        call    FUN_0041e710
        lea     ecx, [esp + 0xc8]
        call    FUN_004d21c0
        pop     edi
        pop     esi
L_9BEB:
        pop     ebp
        pop     ebx
        add     esp, 0xfc
        ret
    }


}
