/*
 * FUN_004a9250 (269 B) — MLR ShardCloud sub-object registry constructor
 * (__thiscall, RET 0xc). Initializes a 0x2b4-byte sub-object: calls base
 * ctor FUN_004ab1e0, sets fields, constructs two sub-objects (FUN_004ae3c0),
 * sets vtable 0x770450, registers callbacks (FUN_004add90/FUN_004addd0),
 * and wires several virtual property getters via the param_2 vtable.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004ab1e0(void);
extern void __cdecl FUN_004ae3c0(void);
extern void __cdecl FUN_004add90(void);
extern void __cdecl FUN_004addd0(void);
extern void __cdecl FUN_004ae5a0(void);

__declspec(naked) void FUN_004a9250(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    ebp
        mov     ebp, dword ptr [esp + 0x10]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        push    ebp
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_004ab1e0
        mov     dword ptr [esi + 0x274], 0x8
        mov     dword ptr [esi + 0x278], 0x0
        mov     dword ptr [esi + 0x280], 0x1
        lea     ecx, [esi + 0x294]
        mov     dword ptr [esi + 0x290], 0x5
        call    FUN_004ae3c0
        lea     ecx, [esi + 0x2a0]
        call    FUN_004ae3c0
        push    ebp
        push    edi
        lea     ecx, [esi + 0x278]
        mov     dword ptr [esi], 0x770450
        call    FUN_004add90
        push    ebp
        push    edi
        lea     ecx, [esi + 0x280]
        call    FUN_004addd0
        mov     edx, dword ptr [edi]
        push    0x1
        lea     eax, [esi + 0x28c]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        push    ebp
        push    edi
        lea     ecx, [esi + 0x294]
        call    FUN_004ae5a0
        push    ebp
        push    edi
        lea     ecx, [esi + 0x2a0]
        call    FUN_004ae5a0
        mov     edx, dword ptr [edi]
        push    0x1
        lea     eax, [esi + 0x2ac]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [edi]
        push    0x1
        lea     eax, [esi + 0x2b0]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [edi]
        push    0x1
        lea     eax, [esi + 0x2b2]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [eax]
        push    0x1
        lea     ecx, [esi + 0x2b3]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        cmp     ebp, 0xa
        jl      L_4a934e
        mov     edx, dword ptr [edi]
        push    0x1
        lea     eax, [esi + 0x2b1]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        ret     0xc
L_4a934e:
        pop     edi
        mov     byte ptr [esi + 0x2b1], 0x0
        mov     eax, esi
        pop     esi
        pop     ebp
        ret     0xc
    }
}
