/*
 * FUN_005E4080 (608 B) - Missile object constructor (__thiscall, RET 0x10).
 *
 * Calls base ctor FUN_005ECEF0, initializes sub-objects at +0x258/+0x260,
 * sets up vtable 0x788FE8, loads missile parameters from the config
 * object (param_2), registers a missile type, and initializes a bunch of
 * fields.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005ecef0(void);
extern void __cdecl FUN_0041fc80(void);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_0041c7d0(void);
extern void __cdecl FUN_005e6590(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_005fb740(void);
extern void __cdecl FUN_00767430(void);
extern void __cdecl FUN_004cdfa0(void);
extern void __cdecl FUN_004ceeb0(void);
extern void __cdecl FUN_005e4360(void);

__declspec(naked) void __stdcall FUN_005e4080(void)
{
    
__asm {
mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x4]
        sub     esp, 0xc
        push    ebx
        mov     ebx, dword ptr [esp + 0x18]
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x28]
        push    eax
        push    ecx
        push    ebx
        push    edx
        mov     ecx, esi
        call    FUN_005ecef0
        lea     ebp, [esi + 0x258]
        push    0
        mov     ecx, ebp
        call    FUN_0041fc80
        lea     edi, [esi + 0x260]
        push    0
        mov     ecx, edi
        mov     dword ptr [ebp], 0x773328
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x786cb4
        xor     edi, edi
        mov     word ptr [esi + 0x2ce], 0xffff
        mov     word ptr [esi + 0x2d0], di
        mov     ecx, ebp
        mov     dword ptr [esi], 0x788fe8
        call    FUN_0041fcb0
        mov     eax, dword ptr [ebx + 0xb8]
        mov     ecx, dword ptr [ebx + 0xbc]
        mov     edx, dword ptr [ebx + 0xc0]
        mov     dword ptr [esi + 0x278], edi
        mov     dword ptr [esi + 0x27c], edi
        mov     dword ptr [esi + 0x280], edi
        lea     edi, [esi + 0x26c]
        mov     dword ptr [edi], eax
        mov     eax, dword ptr [ebx + 0xc4]
        add     ebx, 0xb4
        mov     dword ptr [edi + 0x4], ecx
        mov     cl, byte ptr [ebx]
        mov     dword ptr [esi + 0x294], eax
        /* __emit: MSVC6 encodes cmp reg8,[imm32] as immediate compare, not 3A 0D memory-deref */
        _emit   0x3A
        _emit   0x0D
        _emit   0x94
        _emit   0xC6
        _emit   0x7D
        _emit   0x00
        mov     dword ptr [edi + 0x8], edx
        jnz     l_skip_type_check
        mov     dx, word ptr [ebx + 0x2]
        /* __emit: MSVC6 encodes cmp reg16,[imm32] as immediate compare, not 66 3B 15 memory-deref */
        _emit   0x66
        _emit   0x3B
        _emit   0x15
        _emit   0x96
        _emit   0xC6
        _emit   0x7D
        _emit   0x00
        jz      l_after_register
    l_skip_type_check:
        /* __emit: MSVC6 encodes mov reg,[imm32] as immediate load, not 8B 0D memory-deref */
        _emit   0x8B
        _emit   0x0D
        _emit   0x44
        _emit   0xAB
        _emit   0x7D
        _emit   0x00
        mov     edx, dword ptr [ecx]
        /* __emit: MSVC6 encodes mov eax,[imm32] as immediate load, not A1 memory-deref */
        _emit   0xA1
        _emit   0x40
        _emit   0xAB
        _emit   0x7D
        _emit   0x00
        xor     eax, edx
        mov     ecx, dword ptr [eax + 0x14]
        xor     edx, edx
        mov     dl, byte ptr [ebx]
        xor     ecx, 0x85739531
        push    edx
        call    FUN_004cdfa0
        test    eax, eax
        jz      l_after_register
        push    ebx
        mov     ecx, eax
        call    FUN_004ceeb0
        mov     ebx, eax
        test    ebx, ebx
        jz      l_after_register
        mov     ecx, ebp
        call    FUN_0041fcb0
        push    ebx
        mov     ecx, ebp
        call    FUN_0041fcd0
        mov     ecx, dword ptr [edi + 0x4]
        mov     eax, dword ptr [edi]
        mov     edx, dword ptr [edi + 0x8]
        mov     dword ptr [esi + 0x27c], ecx
        mov     ecx, dword ptr [edi + 0x4]
        mov     dword ptr [esi + 0x278], eax
        mov     eax, dword ptr [edi]
        mov     dword ptr [esi + 0x280], edx
        mov     edx, dword ptr [edi + 0x8]
        mov     dword ptr [esp + 0x14], ecx
        mov     ecx, ebp
        mov     dword ptr [esp + 0x10], eax
        mov     dword ptr [esp + 0x18], edx
        call    FUN_0041fd80
        mov     eax, dword ptr [eax + 0xd8]
        add     eax, 0x80
        push    eax
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, edi
        call    FUN_0041c7d0
        mov     ecx, ebp
        call    FUN_0041fd80
        push    eax
        mov     ecx, esi
        call    FUN_005e6590
        lea     ebp, [esi + 0x260]
        mov     ecx, ebp
        mov     ebx, eax
        call    FUN_0041fcb0
        test    ebx, ebx
        jz      l_after_register2
        /* __emit: MSVC6 encodes mov eax,[imm32] as immediate load, not A1 memory-deref */
        _emit   0xA1
        _emit   0x8C
        _emit   0x26
        _emit   0x7F
        _emit   0x00
        mov     ecx, dword ptr [ebx + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      l_after_register2
        push    ebx
        mov     ecx, ebp
        call    FUN_0041fcd0
    l_after_register2:
        mov     ecx, ebp
        call    FUN_0041fd80
        test    eax, eax
        jz      l_after_register
        mov     ecx, ebp
        call    FUN_0041fd80
        mov     ecx, eax
        call    FUN_005fb740
    l_after_register:
        mov     ecx, dword ptr [edi]
        mov     eax, dword ptr [edi + 0x8]
        mov     edx, dword ptr [edi + 0x4]
        mov     dword ptr [esi + 0x284], ecx
        /* __emit: MSVC6 encodes mov reg16,[imm32] as immediate load, not 66 8B 0D memory-deref */
        _emit   0x66
        _emit   0x8B
        _emit   0x0D
        _emit   0xAC
        _emit   0xB0
        _emit   0x7D
        _emit   0x00
        mov     dword ptr [esi + 0x28c], eax
        xor     eax, eax
        mov     dword ptr [esi + 0x290], eax
        mov     byte ptr [esi + 0x299], al
        mov     dword ptr [esi + 0x2b8], eax
        mov     dword ptr [esi + 0x2bc], eax
        mov     dword ptr [esi + 0x2c8], eax
        mov     byte ptr [esi + 0x2cc], al
        mov     dword ptr [esi + 0x288], edx
        /* __emit: MSVC6 encodes mov reg16,[imm32] as immediate load, not 66 8B 15 memory-deref */
        _emit   0x66
        _emit   0x8B
        _emit   0x15
        _emit   0xAE
        _emit   0xB0
        _emit   0x7D
        _emit   0x00
        lea     eax, [esi + 0x1e0]
        mov     word ptr [esi + 0x2ce], cx
        push    eax
        lea     ecx, [esi + 0x29c]
        mov     byte ptr [esi + 0x298], 0x1
        mov     dword ptr [esi + 0x2c0], 0xbf19999a
        mov     dword ptr [esi + 0x2c4], 0x3f4ccccd
        mov     word ptr [esi + 0x2d0], dx
        call    FUN_00767430
        mov     ecx, esi
        mov     dword ptr [esi + 0x2b4], 0
        call    FUN_005e4360
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     0x10
    }


}
