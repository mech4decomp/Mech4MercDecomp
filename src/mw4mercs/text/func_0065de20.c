/*
 * FUN_0065DE20 (901 B) — string/formatting + file-write routine.
 * Builds several strings via 0x5ddac0/0x5cbd00/0x5480c0, calls a function
 * pointer from 0x76b420, iterates a buffer writing records, and finally
 * writes output via the 0x6fc4xx file API family.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76b420;

extern void __cdecl FUN_005cb1c0(void);
extern void __cdecl FUN_005480c0(void);
extern void __cdecl FUN_005ddac0(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_005dda40(void);
extern void __cdecl FUN_005dddb0(void);
extern void __cdecl FUN_005ddbe0(void);
extern void __cdecl FUN_0065d280(void);
extern void __cdecl FUN_0065db20(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_005cbd00(void);
extern void __cdecl FUN_0065e1c0(void);
extern void __cdecl FUN_0065e220(void);
extern void __cdecl FUN_00637dd0(void);
extern void __cdecl FUN_0065e2a0(void);
extern void __cdecl FUN_006fc400(void);
extern void __cdecl FUN_006fc620(void);
extern void __cdecl FUN_006fc580(void);
extern void __cdecl FUN_005cb3d0(void);

__declspec(naked) void FUN_0065DE20(void)
{
    __asm {
        sub     esp, 0xd0
        push    ebx
        push    esi
        push    edi
        lea     eax, [esp + 0xf]
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_005cb1c0
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x794e04
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x794e04
        push    ecx
        push    0x794e04
        lea     ecx, [esp + 0x1c]
        call    FUN_005480c0
        push    0x794df8
        lea     ecx, [esp + 0x18]
        call    FUN_005ddac0
        push    0x794df4
        lea     ecx, [esp + 0x18]
        call    FUN_005ddac0
        push    0x794de8
        lea     ecx, [esp + 0x18]
        call    FUN_005ddac0
        push    0x794dc4
        lea     ecx, [esp + 0x18]
        call    FUN_005ddac0
        push    0
        call    FUN_00707e70
        mov     ebx, dword ptr [g_76b420]
        sub     esp, 8
        fstp    qword ptr [esp]
        lea     ecx, [esp + 0x58]
        push    0x788524
        push    ecx
        call    ebx
        add     esp, 0x10
        lea     edx, [esp + 0xf]
        push    edx
        lea     eax, [esp + 0x54]
        push    eax
        lea     ecx, [esp + 0x28]
        call    FUN_005dda40
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x20]
        push    ecx
        push    edx
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_005dddb0
        lea     ecx, [esp + 0x20]
        call    FUN_005ddbe0
        push    0x77a078
        lea     ecx, [esp + 0x18]
        call    FUN_005ddac0
        call    FUN_0065d280
        mov     esi, eax
        test    esi, esi
        je      L_65dfe1
        push    0x794db8
        lea     ecx, [esp + 0x18]
        call    FUN_005ddac0
        push    0
        lea     ecx, [esp + 0x18]
        push    ecx
        push    esi
        call    FUN_0065db20
        add     esp, 0xc
        push    0x794dac
        lea     ecx, [esp + 0x18]
        call    FUN_005ddac0
        mov     eax, dword ptr [esi + 0x170]
        push    1
        lea     edx, [esp + 0x18]
        push    edx
        push    eax
        call    FUN_0065db20
        add     esp, 0xc
        push    0x794da8
        lea     ecx, [esp + 0x18]
        call    FUN_005ddac0
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x134]
        add     esi, 0x1c8
        mov     ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        je      L_65dfb8
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x794d9c
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x794d9c
        push    ecx
        push    0x794d9c
        lea     ecx, [esp + 0x20]
        call    FUN_005cbd00
        push    1
        lea     edx, [esp + 0x18]
        push    edx
        mov     ecx, esi
        call    FUN_0041fd80
        push    eax
        call    FUN_0065db20
        add     esp, 0xc
        jmp     L_65dfe1
L_65dfb8:
        mov     eax, dword ptr [esp + 0x10]
        or      ecx, 0xffffffff
        push    eax
        xor     eax, eax
        mov     edi, 0x794d90
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x794d90
        push    ecx
        push    0x794d90
        lea     ecx, [esp + 0x20]
        call    FUN_005cbd00
L_65dfe1:
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x794da8
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x794da8
        push    ecx
        push    0x794da8
        lea     ecx, [esp + 0x20]
        call    FUN_005cbd00
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0xe0]
        mov     ecx, dword ptr [eax + 4]
        push    edx
        mov     edx, dword ptr [eax]
        push    ecx
        push    edx
        lea     ecx, [esp + 0x20]
        call    FUN_005dddb0
        lea     eax, [esp + 0xf]
        push    eax
        lea     ecx, [esp + 0x3c]
        call    FUN_005cb1c0
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x794d2c
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x794d2c
        push    ecx
        push    0x794d2c
        lea     ecx, [esp + 0x40]
        call    FUN_005480c0
        mov     ecx, dword ptr [esp + 0xe4]
        push    ecx
        lea     edx, [esp + 0x7c]
        push    0x76b9a8
        push    edx
        call    ebx
        add     esp, 0xc
        lea     eax, [esp + 0xf]
        push    eax
        lea     ecx, [esp + 0x7c]
        push    ecx
        lea     ecx, [esp + 0x34]
        call    FUN_005dda40
        mov     eax, dword ptr [esp + 0x30]
        mov     ecx, dword ptr [esp + 0x2c]
        mov     edx, eax
        sub     edx, ecx
        cmp     edx, 4
        jae     L_65e13f
        mov     ebx, dword ptr [esp + 0x10]
        push    ebp
        mov     ebp, dword ptr [esp + 0x14]
L_65e0a0:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x77a388
        repne   scasb
        not     ecx
        dec     ecx
        mov     esi, ecx
        lea     eax, [esp + 0x13]
        push    eax
        add     edx, esi
        push    edx
        push    ebx
        lea     ecx, [esp + 0x30]
        call    FUN_0065e1c0
        push    ebp
        lea     ecx, [esi + 0x77a388]
        push    ecx
        push    0x77a388
        lea     ecx, [esp + 0x30]
        call    FUN_005cbd00
        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x34]
        mov     ecx, dword ptr [esp + 0x30]
        push    edx
        push    eax
        push    ecx
        lea     ecx, [esp + 0x30]
        call    FUN_005dddb0
        lea     edx, [esp + 0x24]
        push    edx
        lea     ecx, [esp + 0x4c]
        call    FUN_0065e220
        lea     ecx, [esp + 0x24]
        call    FUN_00637dd0
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x4c]
        mov     edx, dword ptr [esp + 0x48]
        push    eax
        push    ecx
        push    edx
        lea     ecx, [esp + 0x3c]
        call    FUN_0065e2a0
        lea     ecx, [esp + 0x48]
        call    FUN_005ddbe0
        mov     eax, dword ptr [esp + 0x34]
        mov     ecx, dword ptr [esp + 0x30]
        mov     edx, eax
        sub     edx, ecx
        cmp     edx, 4
        jb      L_65e0a0
        pop     ebp
L_65e13f:
        mov     edx, dword ptr [esp + 0x10]
        push    edx
        push    eax
        push    ecx
        lea     ecx, [esp + 0x44]
        call    FUN_005dddb0
        mov     eax, dword ptr [esp + 0x38]
        push    1
        push    eax
        lea     ecx, [esp + 0x18]
        push    ecx
        call    FUN_006fc400
        mov     eax, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x18]
        sub     edx, eax
        push    edx
        push    eax
        mov     eax, dword ptr [esp + 0x18]
        push    eax
        call    FUN_006fc620
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        call    FUN_006fc580
        lea     ecx, [esp + 0x2c]
        call    FUN_005cb3d0
        lea     ecx, [esp + 0x38]
        call    FUN_005cb3d0
        lea     ecx, [esp + 0x14]
        call    FUN_005cb3d0
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0xd0
        ret
    }
}
