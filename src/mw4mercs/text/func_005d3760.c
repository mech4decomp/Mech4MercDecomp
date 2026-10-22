/*
 * FUN_005d3760 (544 B) — __thiscall, RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00684fb0(void);
extern void __stdcall FUN_004084e0(void *p);
extern void __stdcall FUN_005d9500(void);
extern void __stdcall FUN_0040c410(void);
extern void __stdcall FUN_0040c9c0(void);
extern double __stdcall FUN_00707e70(int);
extern void __stdcall FUN_005c5300(void);
extern void __stdcall FUN_005dcd00(void *p);

__declspec(naked) void __stdcall FUN_005d3760(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0x14
        push    ebx
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x364]
        xor     ebx, ebx
        cmp     ecx, ebx
        push    edi
        mov     byte ptr [esi + 0x4ac], bl
        jz      L_3786
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
L_3786:
        mov     edi, dword ptr [esi + 0x368]
        cmp     edi, ebx
        mov     dword ptr [esi + 0x364], ebx
        jz      L_37a6
        mov     ecx, edi
        call    FUN_00684fb0
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
L_37a6:
        mov     edi, dword ptr [esi + 0x45c]
        cmp     edi, ebx
        mov     dword ptr [esi + 0x368], ebx
        jz      L_37c6
        mov     ecx, edi
        call    FUN_005d9500
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
L_37c6:
        lea     ecx, [esp + 0x10]
        lea     edi, [esi + 0x36c]
        push    ecx
        mov     ecx, edi
        mov     dword ptr [esi + 0x45c], ebx
        mov     dword ptr [esp + 0x14], 0xbf800000
        mov     dword ptr [esp + 0x18], 0xbf800000
        mov     dword ptr [esp + 0x1c], 0xbf800000
        call    FUN_0040c410
        lea     edx, [esp + 0x10]
        push    edx
        lea     ecx, [esi + 0x378]
        mov     dword ptr [esp + 0x14], 0xbf800000
        mov     dword ptr [esp + 0x18], 0xbf800000
        mov     dword ptr [esp + 0x1c], 0xbf800000
        call    FUN_0040c410
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esi + 0x390]
        mov     dword ptr [esp + 0x14], 0xbf800000
        mov     dword ptr [esp + 0x18], 0xbf800000
        mov     dword ptr [esp + 0x1c], 0xbf800000
        call    FUN_0040c410
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     ecx, [esi + 0x39c]
        mov     dword ptr [esp + 0x14], 0xbf800000
        mov     dword ptr [esp + 0x18], 0xbf800000
        mov     dword ptr [esp + 0x1c], 0xbf800000
        call    FUN_0040c410
        lea     edx, [esp + 0x10]
        push    edx
        lea     ecx, [esi + 0x384]
        mov     dword ptr [esp + 0x14], 0xbf800000
        mov     dword ptr [esp + 0x18], 0xbf800000
        mov     dword ptr [esp + 0x1c], 0xbf800000
        call    FUN_0040c410
        mov     eax, dword ptr [esi]
        push    ebx
        mov     ecx, esi
        call    dword ptr [eax + 0x140]
        push    0xbf800000
        push    0xbf800000
        push    0xbf800000
        lea     ecx, [esp + 0x1c]
        call    FUN_0040c9c0
        mov     edx, dword ptr [esi]
        push    ebx
        lea     eax, [esp + 0x14]
        push    eax
        push    ebx
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 0x1d0]
        cmp     dword ptr [esi + 0x35c], ebx
        jz      L_394b
        push    ebx
        call    FUN_00707e70
        fstp    qword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x10]
        push    ecx
        push    edx
        push    ebx
        push    0x8
        mov     ecx, esi
        call    FUN_005c5300
        push    eax
        mov     ecx, esi
        mov     dword ptr [eax + 0x14], ebx
        call    FUN_005dcd00
        push    ebx
        call    FUN_00707e70
        fstp    qword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x10]
        push    eax
        push    ecx
        push    ebx
        push    0x7
        mov     ecx, esi
        call    FUN_005c5300
        push    eax
        mov     ecx, esi
        mov     dword ptr [eax + 0x14], ebx
        call    FUN_005dcd00
        push    ebx
        call    FUN_00707e70
        fstp    qword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x10]
        push    edx
        push    eax
        push    ebx
        push    0x3
        mov     ecx, esi
        call    FUN_005c5300
        push    eax
        mov     ecx, esi
        call    FUN_005dcd00
L_394b:
        cmp     dword ptr [esi + 0x360], ebx
        jz      L_3979
        push    ebx
        call    FUN_00707e70
        fstp    qword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x10]
        push    ecx
        push    edx
        push    ebx
        push    0x6
        mov     ecx, esi
        call    FUN_005c5300
        push    eax
        mov     ecx, esi
        call    FUN_005dcd00
L_3979:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
