/*
 * FUN_0069B530 (192 B) — __fastcall (ECX=param) that, while a global
 * (0x008058ac) equals 1, runs an initialization/registration loop via
 * several helpers and string constants.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned long g_58ac;   /* 0x008058ac */
extern unsigned long g_d988;   /* 0x0080d988 */

extern void __cdecl FUN_0064fcd0(void);
extern void __cdecl FUN_00649150(void);
extern void __cdecl FUN_0069ae70(void);
extern void __cdecl FUN_0069b5f0(void);
extern void __cdecl FUN_00649920(void);
extern void __cdecl FUN_006498f0(void);
extern void __cdecl FUN_00562f40(void);

__declspec(naked) void FUN_0069b530(void)
{
    __asm {
        push    ecx
        cmp     dword ptr [g_58ac], 0x1
        jnz     l_ee
    l_3e:
        __emit 0x8D  /* __emit: lea eax,[esp+0] — MSVC6 drops the 00 disp byte (8D 04 24) */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        push    eax
        call    FUN_0064fcd0
        mov     ecx, dword ptr [esp + 0x4]
        mov     eax, dword ptr [g_d988]
        mov     dword ptr [ecx + 0x18], 0x2
        mov     edx, dword ptr [esp + 0x4]
        mov     dword ptr [edx + 0x40], eax
        call    FUN_00649150
        push    0x13
        push    0xa
        call    FUN_0069ae70
        add     esp, 0xc
        call    FUN_0069b5f0
        __emit 0x8B  /* __emit: mov ecx,[esp+0] — MSVC6 drops the 00 disp byte (8B 0C 24) */
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        mov     dword ptr [ecx + 0x3c], eax
        __emit 0x8B  /* __emit: mov ecx,[esp+0] — MSVC6 drops the 00 disp byte (8B 0C 24) */
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        mov     eax, dword ptr [ecx + 0x3c]
        mov     edx, dword ptr [eax + 0xc]
        test    edx, edx
        jnz     l_8d
        mov     dword ptr [eax + 0xc], ecx
    l_8d:
        push    0x7b5890
        push    0x7b58e0
        push    0x7b5f80
        call    FUN_00649920
        mov     eax, dword ptr [g_58ac]
        add     esp, 0xc
        cmp     eax, 0xe
        jnz     l_b5
        call    FUN_00649150
        jmp     l_e1
    l_b5:
        push    0x7b58e0
        call    FUN_006498f0
        add     esp, 0x4
        test    al, al
        jnz     l_d7
        push    0x7b5890
        call    FUN_006498f0
        add     esp, 0x4
        test    al, al
        jz      l_e1
    l_d7:
        push    0x14
        call    FUN_00562f40
        add     esp, 0x4
    l_e1:
        cmp     dword ptr [g_58ac], 0x1
        __emit 0x0F  /* __emit: backward jz rel32 off-by-2 (call-reloc between branch and target) */
        __emit 0x84
        __emit 0x50
        __emit 0xFF
        __emit 0xFF
        __emit 0xFF
    l_ee:
        pop     ecx
        ret
    }
}
