/*
 * FUN_00722730 (187 B) — Periodic update: flushes a pending callback
 * (0x0087e5f4) through a ring buffer / direct call, then processes a list
 * of active entries (0x00858058) when both enable flags are set.
 *
 * __cdecl, no params, RET (no stack cleanup).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_byte_858894;
extern int g_int_87e5f4;
extern char g_byte_87bc34;
extern int g_int_87dde4;
extern int g_int_87dde8;
extern int g_arr_87ddec[];
extern int g_int_8aaea4;
extern int g_int_8aaeb4;
extern char g_byte_858ae0;
extern char g_byte_858ae1;
extern char g_byte_87dd18;
extern int g_int_858138;
extern char g_arr_858058[];

extern void __cdecl FUN_00722390(void);
extern void __cdecl FUN_007238a0(int);
extern void __cdecl FUN_00723590(void);
extern void __cdecl FUN_00722db0(int);

__declspec(naked) void __cdecl FUN_00722730(void)
{
    __asm {
        mov     al, byte ptr [g_byte_858894]
        test    al, al
        jz      L0
        call    FUN_00722390
        mov     byte ptr [g_byte_858894], 0
L0:
        mov     edx, dword ptr [g_int_87e5f4]
        test    edx, edx
        push    esi
        jz      L1
        mov     al, byte ptr [g_byte_87bc34]
        test    al, al
        jz      L2
        mov     ecx, dword ptr [g_int_87dde4]
        mov     esi, dword ptr [g_int_87dde8]
        lea     eax, [ecx + 1]
        and     eax, 0xff
        cmp     eax, esi
        jz      L4
        mov     dword ptr [ecx * 4 + g_arr_87ddec], edx
        mov     dword ptr [g_int_87dde4], eax
L4:
        mov     eax, dword ptr [g_int_8aaea4]
        test    eax, eax
        jz      L5
        mov     eax, dword ptr [g_int_8aaeb4]
        test    eax, eax
        jnz     L5
L2:
        push    edx
        call    FUN_007238a0
L5:
        mov     dword ptr [g_int_87e5f4], 0
L1:
        mov     al, byte ptr [g_byte_858ae0]
        test    al, al
        jz      Lend
        mov     al, byte ptr [g_byte_858ae1]
        test    al, al
        jz      Lend
        call    FUN_00723590
        mov     al, byte ptr [g_byte_87dd18]
        test    al, al
        jnz     Lend
        mov     al, byte ptr [g_int_858138]
        xor     esi, esi
        test    al, al
        jbe     Lend
L6:
        mov     al, byte ptr [esi + g_arr_858058]
        test    al, al
        jz      L7
        push    esi
        call    FUN_00722db0
L7:
        mov     eax, dword ptr [g_int_858138]
        inc     esi
        and     eax, 0xff
        cmp     esi, eax
        jl      L6
Lend:
        pop     esi
        ret
    }
}
