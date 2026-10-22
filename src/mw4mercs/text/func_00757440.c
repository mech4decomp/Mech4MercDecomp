/*
 * FUN_00757440 (194 B) — maps a format/type code to a size value and calls
 * FUN_007583e0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_007583e0(void);

__declspec(naked) void FUN_00757440(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        xor     edx, edx
        cmp     eax, 1
        jne     L_745a
        mov     edx, eax
        mov     eax, dword ptr [ecx+0xc]
        push    edx
        push    eax
        call    FUN_007583e0
        ret     4
    L_745a:
        cmp     eax, 2
        jne     L_746e
        mov     edx, eax
        mov     eax, dword ptr [ecx+0xc]
        push    edx
        push    eax
        call    FUN_007583e0
        ret     4
    L_746e:
        cmp     eax, 4
        jne     L_7485
        mov     eax, dword ptr [ecx+0xc]
        mov     edx, 3
        push    edx
        push    eax
        call    FUN_007583e0
        ret     4
    L_7485:
        cmp     eax, 0x10
        jne     L_749c
        mov     eax, dword ptr [ecx+0xc]
        mov     edx, 5
        push    edx
        push    eax
        call    FUN_007583e0
        ret     4
    L_749c:
        test    al, 8
        je      L_74f5
        test    al, 0xf0
        mov     edx, 4
        je      L_74f5
        test    al, 0x20
        je      L_74bf
        mov     eax, dword ptr [ecx+0xc]
        mov     edx, 0x50004
        push    edx
        push    eax
        call    FUN_007583e0
        ret     4
    L_74bf:
        test    al, 0x40
        je      L_74d5
        mov     eax, dword ptr [ecx+0xc]
        mov     edx, 0xa0004
        push    edx
        push    eax
        call    FUN_007583e0
        ret     4
    L_74d5:
        test    al, 0x80
        je      L_74eb
        mov     eax, dword ptr [ecx+0xc]
        mov     edx, 0x140004
        push    edx
        push    eax
        call    FUN_007583e0
        ret     4
    L_74eb:
        test    ah, 1
        je      L_74f5
        mov     edx, 0xb40004
    L_74f5:
        mov     eax, dword ptr [ecx+0xc]
        push    edx
        push    eax
        call    FUN_007583e0
        ret     4
    }
}
