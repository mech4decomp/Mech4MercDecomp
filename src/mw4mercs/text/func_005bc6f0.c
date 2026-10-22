/*
 * FUN_005bc6f0 (1257 B) — __fastcall (ECX = this). Similar to FUN_005bbdb0:
 *   calls FUN_00713cc0 13 times, copies float vectors from this+0x64..0x70,
 *   builds 4 packed-ARGB color values via the float->byte conversion block,
 *   and calls FUN_00713ae0 once.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00713cc0(int a, int b);
extern void __stdcall FUN_00713ae0(void *p, int n);
extern int DAT_00858940;
extern int DAT_00858944;
extern float DAT_007870d0;

/* fild dword ptr [0x00858940] = DB 05 40 89 85 00 */
#define EMIT_FILD_858940() \
    __asm fild dword ptr [DAT_00858940]

/* fild dword ptr [0x00858944] = DB 05 44 89 85 00 */
#define EMIT_FILD_858944() \
    __asm fild dword ptr [DAT_00858944]

/* fld dword ptr [0x007870d0] = D9 05 D0 70 78 00 */
#define EMIT_FLD_7870d0() \
    __asm fld dword ptr [DAT_007870d0]

/* Common tail of the float->byte component conversion (produces EBX).
   scr = scratch slot offset ([ebp-scr]); block 1 uses 8, blocks 2-4 use 0xc. */
#define CONV_TAIL(scr) \
    __asm fadd st(0), st(1) \
    __asm rcl ecx, 1 \
    __asm sbb eax, eax \
    __asm xor eax, 0xffffffff \
    __asm fstp dword ptr [ebp - scr] \
    __asm xor ecx, ecx \
    __asm mov ebx, dword ptr [ebp - scr] \
    __asm and ebx, eax \
    __asm test ebx, 0xff00 \
    __asm seta cl \
    __asm xor eax, eax \
    __asm sub eax, ecx \
    __asm or ebx, eax \
    __asm and ebx, 0xff

/* Convert component at [esi] (offset 0 -> no displacement encoding). */
#define CONV_C0(scr) \
    __asm fld dword ptr [esi] \
    __asm mov ecx, dword ptr [esi] \
    CONV_TAIL(scr)

/* Convert component at [esi+off] (off = 4, 0xc). */
#define CONV_C(off, scr) \
    __asm fld dword ptr [esi + off] \
    __asm mov ecx, dword ptr [esi + off] \
    CONV_TAIL(scr)

/* Convert 4th component at [esi+8]: value already on FPU stack, so the
   add uses the memory operand directly (D8 46 08) instead of FLD+FADD. */
#define CONV_C8(scr) \
    __asm mov ecx, dword ptr [esi + 8] \
    __asm fadd dword ptr [esi + 8] \
    __asm rcl ecx, 1 \
    __asm sbb eax, eax \
    __asm xor eax, 0xffffffff \
    __asm fstp dword ptr [ebp - scr] \
    __asm xor ecx, ecx \
    __asm mov ebx, dword ptr [ebp - scr] \
    __asm and ebx, eax \
    __asm test ebx, 0xff00 \
    __asm seta cl \
    __asm xor eax, eax \
    __asm sub eax, ecx \
    __asm or ebx, eax \
    __asm and ebx, 0xff

/* Store first converted byte into packed color at [ebp-dst]. */
#define STORE_FIRST(dst) \
    __asm mov dword ptr [ebp - dst], ebx

/* Shift-and-merge subsequent converted byte into packed color at [ebp-dst]. */
#define STORE_NEXT(dst) \
    __asm mov ecx, dword ptr [ebp - dst] \
    __asm shl ecx, 8 \
    __asm or ecx, ebx \
    __asm mov dword ptr [ebp - dst], ecx

__declspec(naked) void __fastcall FUN_005bc6f0(void *param_1)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x9c
        push    ebx
        push    esi

        push    0
        push    1
        mov     esi, ecx
        call    FUN_00713cc0
        push    3
        push    0xd
        call    FUN_00713cc0
        push    0
        push    0xb
        call    FUN_00713cc0
        push    0
        push    6
        call    FUN_00713cc0
        push    1
        push    4
        call    FUN_00713cc0
        push    0
        push    5
        call    FUN_00713cc0
        push    0
        push    0xc
        call    FUN_00713cc0
        push    0
        push    9
        call    FUN_00713cc0
        push    0
        push    0xa
        call    FUN_00713cc0
        push    1
        push    0xf
        call    FUN_00713cc0
        push    2
        push    0x10
        call    FUN_00713cc0
        push    0
        push    7
        call    FUN_00713cc0
        push    0
        push    0x12
        call    FUN_00713cc0

        fld     dword ptr [esi + 0x68]
        fstp    dword ptr [ebp - 0x1c]
        fld     dword ptr [esi + 0x70]
        lea     eax, [ebp - 0x1c]
        fstp    dword ptr [ebp - 0x18]
        fld     dword ptr [esi + 0x6c]
        mov     dword ptr [ebp - 0x90], 0x3f800000
        fstp    dword ptr [ebp - 0x14]
        fld     dword ptr [esi + 0x64]
        mov     dword ptr [ebp - 0x70], 0x3f800000
        fstp    dword ptr [ebp - 0x10]
        mov     dword ptr [ebp - 0x50], 0x3f800000
        mov     dword ptr [ebp - 0x30], 0x3f800000
        mov     dword ptr [ebp - 0x9c], 0
        mov     dword ptr [ebp - 0x98], 0
        mov     dword ptr [ebp - 0x94], 0x3f666666
        mov     dword ptr [ebp - 0xc], eax

        /* block 1 -> [ebp-0x4], scratch [ebp-8] */
        EMIT_FLD_7870d0()
        mov     esi, dword ptr [ebp - 0xc]
        CONV_C(0xc, 8)
        STORE_FIRST(4)
        CONV_C0(8)
        STORE_NEXT(4)
        CONV_C(4, 8)
        STORE_NEXT(4)
        CONV_C8(8)
        STORE_NEXT(4)

        /* block 2 -> [ebp-0x4], scratch [ebp-0xc] */
        EMIT_FILD_858940()
        mov     ecx, dword ptr [ebp - 4]
        lea     edx, [ebp - 0x1c]
        fstp    dword ptr [ebp - 0x7c]
        mov     dword ptr [ebp - 0x8c], ecx
        mov     dword ptr [ebp - 0x78], 0
        mov     dword ptr [ebp - 0x74], 0x3f666666
        mov     dword ptr [ebp - 8], edx
        EMIT_FLD_7870d0()
        mov     esi, dword ptr [ebp - 8]
        CONV_C(0xc, 0xc)
        STORE_FIRST(4)
        CONV_C0(0xc)
        STORE_NEXT(4)
        CONV_C(4, 0xc)
        STORE_NEXT(4)
        CONV_C8(0xc)
        STORE_NEXT(4)

        /* block 3 -> [ebp-0x4], scratch [ebp-0xc] */
        EMIT_FILD_858940()
        mov     eax, dword ptr [ebp - 4]
        mov     dword ptr [ebp - 0x6c], eax
        fstp    dword ptr [ebp - 0x5c]
        mov     dword ptr [ebp - 0x54], 0x3f666666
        EMIT_FILD_858944()
        lea     ecx, [ebp - 0x1c]
        fstp    dword ptr [ebp - 0x58]
        mov     dword ptr [ebp - 8], ecx
        EMIT_FLD_7870d0()
        mov     esi, dword ptr [ebp - 8]
        CONV_C(0xc, 0xc)
        STORE_FIRST(4)
        CONV_C0(0xc)
        STORE_NEXT(4)
        CONV_C(4, 0xc)
        STORE_NEXT(4)
        CONV_C8(0xc)
        STORE_NEXT(4)

        /* block 4 -> [ebp-0x4], scratch [ebp-0xc] */
        EMIT_FILD_858944()
        mov     edx, dword ptr [ebp - 4]
        lea     eax, [ebp - 0x1c]
        fstp    dword ptr [ebp - 0x38]
        mov     dword ptr [ebp - 0x4c], edx
        mov     dword ptr [ebp - 0x3c], 0
        mov     dword ptr [ebp - 0x34], 0x3f666666
        mov     dword ptr [ebp - 8], eax
        EMIT_FLD_7870d0()
        mov     esi, dword ptr [ebp - 8]
        CONV_C(0xc, 0xc)
        STORE_FIRST(4)
        CONV_C0(0xc)
        STORE_NEXT(4)
        CONV_C(4, 0xc)
        STORE_NEXT(4)
        CONV_C8(0xc)
        STORE_NEXT(4)

        mov     ecx, dword ptr [ebp - 4]
        push    4
        lea     edx, [ebp - 0x9c]
        push    edx
        mov     dword ptr [ebp - 0x2c], ecx
        call    FUN_00713ae0
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
