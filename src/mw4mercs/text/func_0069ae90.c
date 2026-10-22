/*
 * FUN_0069AE90 (341 B) — __cdecl, 3 stack params.
 *   State-machine dispatcher keyed on global DAT_008058ac. Calls several
 *   subsystem functions and passes addresses of global string/data objects.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_8058ac;
extern char g_7b5890;
extern char g_7b58e0;
extern char g_7b5f74;

extern void __cdecl FUN_00649150(void);
extern void __cdecl FUN_0069aff0(void);
extern void __cdecl FUN_0069b530(void);
extern void __cdecl FUN_0069b920(void *p);
extern void __cdecl FUN_0061e080(void);
extern void __cdecl FUN_00649920(void *a, void *b, void *c);
extern char __cdecl FUN_006498f0(void *p);
extern void __cdecl FUN_00562f40(int n);
extern void __cdecl FUN_0061e770(void);

__declspec(naked) void __cdecl FUN_0069AE90(void)
{
    __asm {
        mov     eax, dword ptr [g_8058ac]
        cmp     eax, 0x1f
        jnz     L_69aea9
        call    FUN_00649150
        call    FUN_0069aff0
        mov     eax, dword ptr [g_8058ac]
L_69aea9:
        cmp     eax, 0x3
        jnz     L_69aebd
        call    FUN_00649150
        call    FUN_0069b530
        mov     eax, dword ptr [g_8058ac]
L_69aebd:
        cmp     eax, 0x38
        jnz     L_69aed9
        call    FUN_00649150
        mov     eax, dword ptr [esp + 0x4]
        push    eax
        call    FUN_0069b920
        mov     eax, dword ptr [g_8058ac]
        add     esp, 0x4
L_69aed9:
        mov     ecx, dword ptr [esp + 0x8]
        test    ecx, ecx
        push    esi
        mov     esi, 0xe
        jz      L_69af50
        cmp     eax, 0x2f
        jnz     L_69af64
L_69aeec:
        call    FUN_0061e080
        push    offset g_7b5890
        push    offset g_7b58e0
        push    offset g_7b5f74
        call    FUN_00649920
        mov     eax, dword ptr [g_8058ac]
        add     esp, 0xc
        cmp     eax, esi
        jnz     L_69af18
        call    FUN_00649150
        jmp     L_69af44
L_69af18:
        push    offset g_7b58e0
        call    FUN_006498f0
        add     esp, 0x4
        test    al, al
        jnz     L_69af3a
        push    offset g_7b5890
        call    FUN_006498f0
        add     esp, 0x4
        test    al, al
        jz      L_69af44
L_69af3a:
        push    0x14
        call    FUN_00562f40
        add     esp, 0x4
L_69af44:
        mov     eax, dword ptr [g_8058ac]
        cmp     eax, 0x2f
        jz      L_69aeec
        jmp     L_69af64
L_69af50:
        cmp     eax, 0x2f
        jnz     L_69af64
        push    0x2d
        call    FUN_00562f40
        mov     eax, dword ptr [g_8058ac]
        add     esp, 0x4
L_69af64:
        mov     ecx, dword ptr [esp + 0x10]
        test    ecx, ecx
        jz      L_69afd4
        cmp     eax, 0x43
        jnz     L_69afe3
L_69af71:
        call    FUN_0061e770
        push    offset g_7b5890
        push    offset g_7b58e0
        push    offset g_7b5f74
        call    FUN_00649920
        mov     eax, dword ptr [g_8058ac]
        add     esp, 0xc
        cmp     eax, esi
        jnz     L_69af9d
        call    FUN_00649150
        jmp     L_69afc9
L_69af9d:
        push    offset g_7b58e0
        call    FUN_006498f0
        add     esp, 0x4
        test    al, al
        jnz     L_69afbf
        push    offset g_7b5890
        call    FUN_006498f0
        add     esp, 0x4
        test    al, al
        jz      L_69afc9
L_69afbf:
        push    0x14
        call    FUN_00562f40
        add     esp, 0x4
L_69afc9:
        cmp     dword ptr [g_8058ac], 0x43
        jz      L_69af71
        pop     esi
        ret
L_69afd4:
        cmp     eax, 0x43
        jnz     L_69afe3
        push    0x41
        call    FUN_00562f40
        add     esp, 0x4
L_69afe3:
        pop     esi
        ret
    }
}
