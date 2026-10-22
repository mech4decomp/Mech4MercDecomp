/*
 * FUN_100030f0 (225 B) - __stdcall, RET 0x10. Object registration/init
 * routine with an SEH frame: validates flags, builds a sub-object via
 * FUN_10001b10, calls FUN_1000de40, tears down via FUN_10001970.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1000ddd0(void);   /* rel32 call */
extern void __cdecl FUN_10001b10(void);   /* rel32 call */
extern void __cdecl FUN_1000de40(void);   /* rel32 call */
extern void __cdecl FUN_10001970(void);   /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call */
extern void __cdecl FUN_1000dff0(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_100030f0(void)
{
    __asm {
        push    -1
        push    0x10046b58
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x2c
        push    ebp
        push    esi
        push    edi
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esp + 0xc], 0
        call    FUN_1000ddd0
        mov     ecx, dword ptr [esp + 0x48]
        mov     al, byte ptr [ecx + 0x20]
        test    al, al
        mov     dword ptr [esp + 0x40], 0
        jnz     L_136
        mov     esi, 0xc1120008
        jmp     L_19d
L_136:
        mov     eax, dword ptr [ecx + 0x34]
        test    eax, eax
        jnz     L_144
        mov     esi, 0xc1120405
        jmp     L_19d
L_144:
        mov     ebp, dword ptr [esp + 0x4c]
        test    ebp, ebp
        jnz     L_153
        mov     esi, 0x80070057
        jmp     L_19d
L_153:
        mov     eax, dword ptr [esp + 0x50]
        test    eax, eax
        jnz     L_160
        mov     eax, 0x10055024
L_160:
        push    eax
        lea     eax, [esp + 0x10]
        lea     edi, [ecx - 8]
        push    eax
        push    edi
        call    FUN_10001b10
        mov     esi, eax
        test    esi, esi
        jl      L_19d
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 0x54]
        push    ecx
        push    ebp
        push    edx
        lea     eax, [esp + 0x1c]
        push    eax
        call    FUN_1000de40
        mov     esi, eax
        test    esi, esi
        jl      L_19d
        lea     ecx, [esp + 0x10]
        push    ecx
        push    edi
        call    FUN_10001970
        mov     esi, eax
L_19d:
        mov     edx, dword ptr [esp + 0xc]
        push    edx
        call    FUN_10001d60
        add     esp, 4
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esp + 0x40], 0xffffffff
        call    FUN_1000dff0
        mov     ecx, dword ptr [esp + 0x38]
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        mov     dword ptr fs:[0], ecx
        add     esp, 0x38
        ret     0x10
    }
}
