/*
 * FUN_005bbdb0 (2366 B) — __fastcall (ECX = this). Large initializer that
 *   calls FUN_00713cc0 13 times to set up material/color slots, then builds
 *   several packed-ARGB color values from float vectors via a repeated
 *   float->byte conversion block, and calls FUN_00713ae0 twice.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00713cc0(int a, int b);
extern void __stdcall FUN_00713ae0(void *p, int n);
extern int DAT_00858940;
extern int DAT_00858944;
extern float DAT_0076d070;
extern float DAT_007870d0;

/* fild dword ptr [0x00858940] = DB 05 40 89 85 00 */
#define EMIT_FILD_858940() \
    __asm fild dword ptr [DAT_00858940]

/* fild dword ptr [0x00858944] = DB 05 44 89 85 00 */
#define EMIT_FILD_858944() \
    __asm fild dword ptr [DAT_00858944]

/* fmul dword ptr [0x0076d070] = D8 0D 70 D0 76 00 */
#define EMIT_FMUL_76d070() \
    __asm fmul dword ptr [DAT_0076d070]

/* fld dword ptr [0x007870d0] = D9 05 D0 70 78 00 */
#define EMIT_FLD_7870d0() \
    __asm fld dword ptr [DAT_007870d0]

/* Common tail of the float->byte component conversion (produces EBX).
   scr = scratch slot offset ([ebp-scr]); block 1 uses 8, blocks 2-8 use 4. */
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

/* Convert component at [esi+off] (off = 4, 8, 0xc). */
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

__declspec(naked) void __fastcall FUN_005bbdb0(void *param_1)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xa4
        push    ebx
        push    esi

        push    0
        push    1
        mov     esi, ecx
        call    FUN_00713cc0
        push    1
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

        EMIT_FILD_858940()
        lea     eax, [ebp - 0x24]
        mov     dword ptr [ebp - 0x24], 0
        fdiv    dword ptr [esi + 0x74]
        mov     dword ptr [ebp - 0x20], 0
        mov     dword ptr [ebp - 0x1c], 0
        mov     dword ptr [ebp - 0x18], 0
        mov     dword ptr [ebp - 0x98], 0x3f800000
        mov     dword ptr [ebp - 0x78], 0x3f800000
        mov     dword ptr [ebp - 0x58], 0x3f800000
        mov     dword ptr [ebp - 0x38], 0x3f800000
        mov     dword ptr [ebp - 0xa4], 0
        mov     dword ptr [ebp - 0xa0], 0
        mov     dword ptr [ebp - 0x9c], 0x3f666666
        mov     dword ptr [ebp - 4], eax
        EMIT_FILD_858944()
        EMIT_FMUL_76d070()
        fstp    dword ptr [ebp - 0xc]
        EMIT_FMUL_76d070()
        fld     dword ptr [ebp - 0xc]
        fsub    st(0), st(1)
        fstp    dword ptr [ebp - 0x14]
        fadd    dword ptr [ebp - 0xc]
        fstp    dword ptr [ebp - 0x10]

        /* block 1 -> [ebp-0xc] */
        EMIT_FLD_7870d0()
        mov     esi, dword ptr [ebp - 4]
        CONV_C(0xc, 8)
        STORE_FIRST(0xc)
        CONV_C0(8)
        STORE_NEXT(0xc)
        CONV_C(4, 8)
        STORE_NEXT(0xc)
        CONV_C8(8)
        STORE_NEXT(0xc)

        /* block 2 -> [ebp-0xc] */
        EMIT_FILD_858940()
        mov     ecx, dword ptr [ebp - 0xc]
        lea     edx, [ebp - 0x24]
        mov     dword ptr [ebp - 0x94], ecx
        fstp    dword ptr [ebp - 0x84]
        mov     dword ptr [ebp - 0x80], 0
        mov     dword ptr [ebp - 0x7c], 0x3f666666
        mov     dword ptr [ebp - 8], edx
        EMIT_FLD_7870d0()
        mov     esi, dword ptr [ebp - 8]
        CONV_C(0xc, 4)
        STORE_FIRST(0xc)
        CONV_C0(4)
        STORE_NEXT(0xc)
        CONV_C(4, 4)
        STORE_NEXT(0xc)
        CONV_C8(4)
        STORE_NEXT(0xc)

        /* block 3 -> [ebp-0xc] */
        EMIT_FILD_858940()
        mov     eax, dword ptr [ebp - 0xc]
        mov     ecx, dword ptr [ebp - 0x14]
        fstp    dword ptr [ebp - 0x64]
        mov     dword ptr [ebp - 0x74], eax
        lea     edx, [ebp - 0x24]
        mov     dword ptr [ebp - 0x60], ecx
        mov     dword ptr [ebp - 0x5c], 0x3f666666
        mov     dword ptr [ebp - 8], edx
        EMIT_FLD_7870d0()
        mov     esi, dword ptr [ebp - 8]
        CONV_C(0xc, 4)
        STORE_FIRST(0xc)
        CONV_C0(4)
        STORE_NEXT(0xc)
        CONV_C(4, 4)
        STORE_NEXT(0xc)
        CONV_C8(4)
        STORE_NEXT(0xc)

        /* block 4 -> [ebp-0x14] */
        mov     eax, dword ptr [ebp - 0xc]
        mov     ecx, dword ptr [ebp - 0x14]
        lea     edx, [ebp - 0x24]
        mov     dword ptr [ebp - 0x54], eax
        mov     dword ptr [ebp - 0x44], 0
        mov     dword ptr [ebp - 0x40], ecx
        mov     dword ptr [ebp - 0x3c], 0x3f666666
        mov     dword ptr [ebp - 8], edx
        EMIT_FLD_7870d0()
        mov     esi, dword ptr [ebp - 8]
        CONV_C(0xc, 4)
        STORE_FIRST(0x14)
        CONV_C0(4)
        STORE_NEXT(0x14)
        CONV_C(4, 4)
        STORE_NEXT(0x14)
        CONV_C8(4)
        STORE_NEXT(0x14)

        /* block 5 -> [ebp-0x14] */
        mov     eax, dword ptr [ebp - 0x14]
        push    4
        lea     ecx, [ebp - 0xa4]
        push    ecx
        mov     dword ptr [ebp - 0x34], eax
        call    FUN_00713ae0
        mov     edx, dword ptr [ebp - 0x10]
        lea     eax, [ebp - 0x24]
        mov     dword ptr [ebp - 0xa4], 0
        mov     dword ptr [ebp - 0xa0], edx
        mov     dword ptr [ebp - 0x9c], 0x3f666666
        mov     dword ptr [ebp - 8], eax
        EMIT_FLD_7870d0()
        mov     esi, dword ptr [ebp - 8]
        CONV_C(0xc, 4)
        STORE_FIRST(0x14)
        CONV_C0(4)
        STORE_NEXT(0x14)
        CONV_C(4, 4)
        STORE_NEXT(0x14)
        CONV_C8(4)
        STORE_NEXT(0x14)

        /* block 6 -> [ebp-0x10] */
        EMIT_FILD_858940()
        mov     ecx, dword ptr [ebp - 0x14]
        lea     eax, [ebp - 0x24]
        fstp    dword ptr [ebp - 0x84]
        mov     dword ptr [ebp - 0x94], ecx
        mov     dword ptr [ebp - 0x80], edx
        mov     dword ptr [ebp - 0x7c], 0x3f666666
        mov     dword ptr [ebp - 8], eax
        EMIT_FLD_7870d0()
        mov     esi, dword ptr [ebp - 8]
        CONV_C(0xc, 4)
        STORE_FIRST(0x10)
        CONV_C0(4)
        STORE_NEXT(0x10)
        CONV_C(4, 4)
        STORE_NEXT(0x10)
        CONV_C8(4)
        STORE_NEXT(0x10)

        /* block 7 -> [ebp-0x10] */
        EMIT_FILD_858940()
        mov     ecx, dword ptr [ebp - 0x10]
        lea     edx, [ebp - 0x24]
        fstp    dword ptr [ebp - 0x64]
        mov     dword ptr [ebp - 0x74], ecx
        EMIT_FILD_858944()
        mov     dword ptr [ebp - 0x5c], 0x3f666666
        mov     dword ptr [ebp - 8], edx
        fstp    dword ptr [ebp - 0x60]
        EMIT_FLD_7870d0()
        mov     esi, dword ptr [ebp - 8]
        CONV_C(0xc, 4)
        STORE_FIRST(0x10)
        CONV_C0(4)
        STORE_NEXT(0x10)
        CONV_C(4, 4)
        STORE_NEXT(0x10)
        CONV_C8(4)
        STORE_NEXT(0x10)

        /* block 8 -> [ebp-0x10] */
        EMIT_FILD_858944()
        mov     eax, dword ptr [ebp - 0x10]
        lea     ecx, [ebp - 0x24]
        mov     dword ptr [ebp - 0x54], eax
        fstp    dword ptr [ebp - 0x40]
        mov     dword ptr [ebp - 0x44], 0
        mov     dword ptr [ebp - 0x3c], 0x3f666666
        mov     dword ptr [ebp - 8], ecx
        EMIT_FLD_7870d0()
        mov     esi, dword ptr [ebp - 8]
        CONV_C(0xc, 4)
        STORE_FIRST(0x10)
        CONV_C0(4)
        STORE_NEXT(0x10)
        CONV_C(4, 4)
        STORE_NEXT(0x10)
        CONV_C8(4)
        STORE_NEXT(0x10)

        mov     edx, dword ptr [ebp - 0x10]
        push    4
        lea     eax, [ebp - 0xa4]
        push    eax
        mov     dword ptr [ebp - 0x34], edx
        call    FUN_00713ae0
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
