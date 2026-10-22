/*
 * FUN_10002980 (275 B) - __stdcall, RET 0xc. SEH-framed object
 * registration/activation helper. Validates the object's registered flag
 * (+0x28), optionally invokes a vtable method (+0x14) when +0x3c is set,
 * allocates a 0x14-byte sub-object via FUN_10001d50, constructs it via
 * FUN_1000c960, copies a 0x10-byte GUID block from +0x48, and calls
 * FUN_100080d0. Records status in +0x40/+0x44 and the sub-object in +0x3c.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d50(void);     /* rel32 call (alloc) */
extern void __cdecl FUN_1000c960(void);     /* rel32 call (thiscall ctor) */
extern void __stdcall FUN_100080d0(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_10002980(void)
{
    __asm {
        mov     eax, dword ptr fs:[0]
        push    -1
        push    0x10046b1b
        push    eax
        mov     dword ptr fs:[0], esp
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0x18]
        mov     al, byte ptr [esi + 0x28]
        test    al, al
        push    edi
        jne     L_29bc
        mov     eax, 0xc1120008
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr fs:[0], ecx
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0xc
        ret     0xc
    L_29bc:
        mov     eax, dword ptr [esi + 0x3c]
        test    eax, eax
        je      L_29c9
        mov     eax, dword ptr [esi]
        push    esi
        call    dword ptr [eax + 0x14]
    L_29c9:
        mov     ebx, dword ptr [esp + 0x20]
        test    ebx, ebx
        jne     L_29ea
        mov     eax, 0x80070057
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr fs:[0], ecx
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0xc
        ret     0xc
    L_29ea:
        push    0x14
        call    FUN_10001d50
        add     esp, 0x4
        mov     dword ptr [esp + 0x1c], eax
        test    eax, eax
        mov     dword ptr [esp + 0x14], 0
        je      L_2a13
        mov     ecx, dword ptr [esi + 0x30]
        push    ecx
        mov     ecx, eax
        call    FUN_1000c960
        mov     edi, eax
        jmp     L_2a15
    L_2a13:
        xor     edi, edi
    L_2a15:
        test    edi, edi
        mov     dword ptr [esp + 0x14], 0xffffffff
        jne     L_2a32
        mov     eax, 0x8007000e
        mov     dword ptr [esi + 0x40], 4
        mov     dword ptr [esi + 0x44], eax
        jmp     L_2a7c
    L_2a32:
        push    edi
        sub     esp, 0x10
        mov     eax, esp
        lea     edx, [esi + 0x48]
        mov     ecx, dword ptr [edx]
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [edx + 4]
        mov     dword ptr [eax + 4], ecx
        mov     ecx, dword ptr [edx + 8]
        mov     edx, dword ptr [edx + 0xc]
        mov     dword ptr [eax + 8], ecx
        mov     ecx, dword ptr [esi + 0x38]
        mov     dword ptr [eax + 0xc], edx
        mov     eax, dword ptr [esp + 0x38]
        push    eax
        push    ebx
        push    ecx
        call    FUN_100080d0
        test    eax, eax
        jge     L_2a70
        mov     dword ptr [esi + 0x40], 4
        mov     dword ptr [esi + 0x44], eax
        jmp     L_2a7c
    L_2a70:
        mov     dword ptr [esi + 0x40], 1
        mov     eax, 0x8000000a
    L_2a7c:
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [esi + 0x3c], edi
        pop     edi
        pop     esi
        mov     dword ptr fs:[0], ecx
        pop     ebx
        add     esp, 0xc
        ret     0xc
    }
}
