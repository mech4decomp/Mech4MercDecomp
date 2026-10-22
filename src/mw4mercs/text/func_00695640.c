/*
 * FUN_00695640 (397 B) — __fastcall (ECX=param_1), returns param_1 in EAX, RET.
 *
 * Initializes a path object (this), allocates a sub-object, and wires up
 * several sub-objects via helper calls.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00696c10(void);
extern void __cdecl FUN_005e1bf0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00547ba0(void);
extern void __cdecl FUN_005480c0(void);
extern void __cdecl FUN_00694b10(void);
extern void __cdecl FUN_00696ed0(void);
extern void __cdecl FUN_00696e50(void);
extern void __cdecl FUN_00696e30(void);
extern void __cdecl FUN_00696d30(void);
extern void __cdecl FUN_005cb3d0(void);
extern void __cdecl FUN_005e1c30(void);

extern int g_0082db20;

__declspec(naked) void *__fastcall FUN_00695640(void *param_1)
{
    __asm {
        sub     esp, 0x28
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        push    edi
        xor     ebx, ebx
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x16]
        push    ecx
        mov     dword ptr [esi], ebx
        lea     ecx, [esi + 0xc]
        mov     dword ptr [esp + 0x3c], ebx
        mov     dword ptr [esi + 0x4], ebx
        mov     dword ptr [esi + 0x8], ebx
        mov     dword ptr [esp + 0x1c], ebx
        call    FUN_00696c10
        push    0x8
        lea     edx, [esp + 0x16]
        lea     edi, [esi + 0x18]
        push    edx
        mov     ecx, edi
        mov     byte ptr [esi + 0x10], bl
        mov     byte ptr [esi + 0x11], bl
        mov     byte ptr [esi + 0x12], bl
        mov     byte ptr [esi + 0x13], bl
        mov     dword ptr [esi + 0x14], ebx
        call    FUN_005e1bf0
        mov     eax, dword ptr [edi + 0x4]
        push    0x38
        mov     byte ptr [eax], bl
        mov     dword ptr [g_0082db20], esi
        call    FUN_004084d0
        mov     ebp, eax
        add     esp, 0x4
        cmp     ebp, ebx
        jz      L_695751
        lea     ecx, [esp + 0x14]
        push    ecx
        lea     edx, [esp + 0x16]
        push    edx
        lea     ecx, [esp + 0x2c]
        mov     dword ptr [esp + 0x24], ebx
        mov     dword ptr [esp + 0x28], ebx
        mov     dword ptr [esp + 0x1c], ebx
        call    FUN_00547ba0
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x76b768
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x76b768
        push    ecx
        push    0x76b768
        lea     ecx, [esp + 0x24]
        call    FUN_005480c0
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x17]
        push    ecx
        lea     ecx, [esp + 0x38]
        mov     dword ptr [esp + 0x30], ebx
        mov     dword ptr [esp + 0x34], ebx
        mov     dword ptr [esp + 0x1c], ebx
        call    FUN_00547ba0
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x76b768
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x76b768
        push    ecx
        push    0x76b768
        lea     ecx, [esp + 0x30]
        call    FUN_005480c0
        lea     edx, [esp + 0x1c]
        push    edx
        lea     eax, [esp + 0x2c]
        push    eax
        push    0x2
        mov     ecx, ebp
        mov     dword ptr [esp + 0x40], 0xf
        call    FUN_00694b10
        mov     edi, eax
        jmp     L_695753
L_695751:
        xor     edi, edi
L_695753:
        mov     ecx, dword ptr [esi]
        mov     dword ptr [esp + 0x14], ecx
        push    ebx
        mov     ecx, esi
        call    FUN_00696ed0
        push    ebx
        push    0x1
        push    edi
        mov     ecx, esi
        call    FUN_00696e50
        lea     edx, [esp + 0x14]
        push    edx
        lea     ecx, [esp + 0x1c]
        call    FUN_00696e30
        lea     ecx, [esp + 0x14]
        call    FUN_00696d30
        lea     ecx, [esp + 0x18]
        call    FUN_00696d30
        mov     ebx, dword ptr [esp + 0x34]
        test    bl, 0x8
        jz      L_6957a1
        lea     ecx, [esp + 0x28]
        and     ebx, 0xfffffff7
        call    FUN_005cb3d0
L_6957a1:
        test    bl, 0x4
        jz      L_6957a9
        and     ebx, 0xfffffffb
L_6957a9:
        test    bl, 0x2
        jz      L_6957c3
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x24]
        sub     ecx, eax
        push    ecx
        push    eax
        lea     ecx, [esp + 0x2c]
        call    FUN_005e1c30
L_6957c3:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x28
        ret
    }
}
