/*
 * FUN_004ef030 (218 B) — MLR/Adept application core, __thiscall with 3 stack
 * args (RET 0xc). Initializes a gosFXComponent: calls FUN_004ef130 /
 * FUN_004f0ce0, sets vtable PTR_FUN_00774c2c, dispatches a virtual call,
 * stores a sub-object handle, and conditionally builds a transform struct
 * (FPU) passed to another virtual call.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004ef130(void);
extern void __cdecl FUN_004f0ce0(void);
extern void __cdecl FUN_004da840(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_004ef030(void)
{
    __asm {
        sub     esp, 0x1c
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x34]
        push    edi
        mov     esi, ecx
        call    FUN_004ef130
        mov     ecx, dword ptr [esp + 0x34]
        add     esp, 0x4
        push    eax
        mov     eax, dword ptr [esp + 0x3c]
        push    eax
        push    edi
        push    ecx
        mov     ecx, esi
        call    FUN_004f0ce0
        mov     ebp, dword ptr [esi + 0x24]
        mov     edx, dword ptr [edi]
        mov     ebx, dword ptr [ebp + 0x144]
        push    0x4
        lea     eax, [esp + 0x38]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esi], 0x774c2c
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [esp + 0x38]
        mov     eax, dword ptr [esp + 0x34]
        cmp     eax, -0x1
        mov     edi, dword ptr [ecx + 0x4c]
        mov     dword ptr [esi + 0x28], edi
        jz      L096
        push    eax
        mov     ecx, edi
        call    FUN_004da840
        mov     dword ptr [esi + 0x2c], eax
        jmp     L09d
L096:
        mov     dword ptr [esi + 0x2c], 0x0
L09d:
        test    byte ptr [ebx + 0x9c], 0x1
        jz      L0fe
        push    0x0
        call    FUN_00707e70
        mov     edx, dword ptr [ebx]
        lea     eax, [esp + 0x10]
        add     ebp, 0x80
        fstp    qword ptr [esp + 0x10]
        push    eax
        mov     ecx, ebx
        mov     dword ptr [esp + 0x1c], 0xbf800000
        mov     dword ptr [esp + 0x28], ebp
        mov     dword ptr [esp + 0x2c], 0x0
        mov     dword ptr [esp + 0x20], 0x0
        mov     dword ptr [esp + 0x24], 0xbf800000
        call    dword ptr [edx + 0x4]
        mov     ecx, dword ptr [esi + 0x2c]
        test    ecx, ecx
        jz      L0fe
        lea     eax, [esp + 0x38]
        push    eax
        mov     byte ptr [esp + 0x3c], 0x1
        mov     edx, dword ptr [ecx]
        push    edi
        call    dword ptr [edx + 0x4]
L0fe:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x1c
        ret     0xc
    }
}
