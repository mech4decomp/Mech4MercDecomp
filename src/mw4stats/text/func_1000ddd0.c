/*
 * FUN_1000ddd0 (344 B) - __stdcall, 5 params. SEH-guarded setup routine.
 * Validates the object (fields +8/+0xc must be null) and the param_3 struct
 * (IsBadReadPtr @ 0x10021060), allocates a 0x280-byte pool via FUN_1000a120,
 * initializes it via FUN_1000fe20, copies the 16-byte struct into object+0x1c,
 * then calls FUN_10010010 to open the stats file. On success records the
 * current system time (GetSystemTime @ 0x10021094 / SystemTimeToFileTime @
 * 0x10021090) into object+0x10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_10021060;   /* IsBadReadPtr IAT @ 0x10021060 */
extern void *g_10021094;   /* GetSystemTime IAT @ 0x10021094 */
extern void *g_10021090;   /* SystemTimeToFileTime IAT @ 0x10021090 */
extern void FUN_1000a120(void);
extern void FUN_1000fe20(void);
extern void FUN_10010010(void);

__declspec(naked) unsigned int __cdecl FUN_1000ddd0(void)
{
    __asm {
        mov     eax, dword ptr fs:[0]
        push    -1
        push    0x1001fa9b
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x10
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x2c]
        push    edi
        mov     eax, dword ptr [esi + 0x8]
        test    eax, eax
        jnz     Ldf0e
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        jnz     Ldf0e
        mov     edi, dword ptr [esp + 0x38]
        mov     eax, dword ptr [edi + 0x4]
        test    eax, eax
        jnz     Lde18
        mov     ebp, 0x2
        jmp     Lde1d
Lde18:
        and     eax, 0x7
        mov     ebp, eax
Lde1d:
        push    0x10
        push    edi
        mov     dword ptr [esp + 0x38], ebp
        call    dword ptr [g_10021060]
        test    eax, eax
        jnz     Ldf07
        cmp     dword ptr [edi], 0x10
        jnz     Ldf07
        mov     eax, dword ptr [esp + 0x3c]
        test    eax, eax
        jz      Ldf07
        mov     ebx, dword ptr [esp + 0x34]
        test    ebx, ebx
        jz      Ldf07
        cmp     ebp, 0x1
        jz      Lde66
        cmp     ebp, 0x2
        jz      Lde66
        cmp     ebp, 0x4
        jnz     Ldf07
Lde66:
        push    0x280
        mov     dword ptr [esi + 0x18], ebx
        mov     dword ptr [esi + 0x8], eax
        call    FUN_1000a120
        add     esp, 0x4
        mov     dword ptr [esp + 0x38], eax
        test    eax, eax
        mov     dword ptr [esp + 0x28], 0x0
        jz      Lde92
        mov     ecx, eax
        call    FUN_1000fe20
        jmp     Lde94
Lde92:
        xor     eax, eax
Lde94:
        test    eax, eax
        mov     dword ptr [esp + 0x28], 0xffffffff
        mov     dword ptr [esi + 0xc], eax
        jnz     Ldeaa
        mov     eax, 0x8007000e
        jmp     Ldf13
Ldeaa:
        mov     ebp, dword ptr [edi]
        lea     ecx, [esi + 0x1c]
        mov     edx, ecx
        mov     dword ptr [edx], ebp
        mov     ebp, dword ptr [edi + 0x4]
        mov     dword ptr [edx + 0x4], ebp
        mov     ebp, dword ptr [edi + 0x8]
        mov     dword ptr [edx + 0x8], ebp
        mov     edi, dword ptr [edi + 0xc]
        mov     dword ptr [edx + 0xc], edi
        mov     edx, dword ptr [esi + 0x20]
        mov     edi, dword ptr [esp + 0x30]
        and     edx, 0xfffffff8
        or      edx, edi
        mov     dword ptr [esi + 0x20], edx
        mov     edx, dword ptr [esp + 0x40]
        push    edx
        mov     edx, dword ptr [esi + 0x8]
        push    edx
        push    ecx
        push    ebx
        push    eax
        call    FUN_10010010
        test    eax, eax
        jl      Ldf13
        lea     eax, [esp + 0x10]
        push    eax
        call    dword ptr [g_10021094]
        add     esi, 0x10
        lea     ecx, [esp + 0x10]
        push    esi
        push    ecx
        call    dword ptr [g_10021090]
        xor     eax, eax
        jmp     Ldf13
Ldf07:
        mov     eax, 0x80070057
        jmp     Ldf13
Ldf0e:
        mov     eax, 0x80040210
Ldf13:
        mov     ecx, dword ptr [esp + 0x20]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x1c
        ret     0x14
    }
}
