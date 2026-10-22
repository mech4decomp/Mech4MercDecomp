/*
 * FUN_00618e20 (275 B) — __thiscall (ECX = this), RET 4 (one stack param).
 * Iterates a list, updates entries, then drives a render/update sequence.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_7f25a8;   /* 0x007f25a8 */

extern char __cdecl FUN_00415230(int a);
extern int __cdecl FUN_0050e1a0(int a);
extern void __cdecl FUN_005accc0(int a);
extern void __cdecl FUN_005acd20(int a);
extern void __cdecl FUN_0041ee70(int a);
extern void *__cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004d1f80(void *a, int b);
extern void __cdecl FUN_004d2680(void *a, int b);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_0041ef60(void);

__declspec(naked) void __stdcall FUN_00618e20(void *param)
{
    __asm {
        sub     esp, 0x6C
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x78]
        test    esi, esi
        mov     ebp, ecx
        jz      L_f2b
        push    ebx
        push    edi
        mov     edi, dword ptr [esi + 0x34C]
L_e3b:
        test    edi, edi
        jz      L_e71
        mov     ebx, dword ptr [edi]
        test    ebx, ebx
        mov     edi, dword ptr [edi + 0x4]
        jz      L_e71
        mov     eax, dword ptr [g_7f25a8]
        mov     ecx, dword ptr [ebx + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      L_e3b
        mov     eax, dword ptr [ebx + 0x1B0]
        push    eax
        call    FUN_0050e1a0
        add     esp, 0x4
        mov     dword ptr [ebx + 0x1AC], eax
        jmp     L_e3b
L_e71:
        mov     edi, dword ptr [esi + 0x408]
        push    0x3f800000
        mov     ecx, edi
        call    FUN_005accc0
        push    0x0
        mov     ecx, edi
        call    FUN_005acd20
        mov     bl, byte ptr [esi + 0x33C]
        push    0x0
        lea     ecx, [esp + 0x14]
        mov     byte ptr [esi + 0x33C], 0x0
        call    FUN_0041ee70
        mov     edi, dword ptr [esi]
        lea     ecx, [ebp + 0x74]
        call    FUN_0041fd80
        push    eax
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, esi
        call    dword ptr [edi + 0xC]
        mov     edx, dword ptr [esp + 0x10]
        push    0x0
        lea     ecx, [esp + 0x14]
        call    dword ptr [edx + 0xC]
        mov     eax, dword ptr [esi + 0x574]
        add     eax, 0x18
        mov     dword ptr [esp + 0x18], 0xffffffec
        mov     cx, word ptr [eax]
        mov     dx, word ptr [eax + 0x2]
        push    0x1
        lea     eax, [esp + 0x84]
        mov     word ptr [esp + 0x84], cx
        push    eax
        lea     ecx, [esp + 0x40]
        mov     word ptr [esp + 0x8A], dx
        call    FUN_004d1f80
        push    0x0
        lea     ecx, [esp + 0x14]
        push    ecx
        lea     ecx, [esp + 0x40]
        call    FUN_004d2680
        lea     ecx, [esp + 0x38]
        mov     byte ptr [esi + 0x33C], bl
        call    FUN_004d21c0
        lea     ecx, [esp + 0x10]
        call    FUN_0041ef60
        pop     edi
        pop     ebx
L_f2b:
        pop     esi
        pop     ebp
        add     esp, 0x6C
        ret     0x4
    }
}
