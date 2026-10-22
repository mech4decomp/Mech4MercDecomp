/*
 * FUN_005bcc70 (209 B) — __cdecl initializer. Zeroes a block of globals at
 *   0x0080dab8..0x0080daf0, allocates via FUN_004084d0, conditionally builds
 *   an object via FUN_004151c0, then sets up more globals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int n);
extern void *__fastcall FUN_004151c0(void *this, int a, int b, int c);
extern void FUN_00637ef0(void);

extern int DAT_0080daf0;
extern int DAT_0080daec;
extern int DAT_0080dae4;
extern int DAT_0080dae8;
extern int DAT_0080dae0;
extern int DAT_0080dadc;
extern int DAT_0080dad8;
extern int DAT_0080dad4;
extern int DAT_0080dad0;
extern int DAT_0080dac0;
extern int DAT_0080dabc;
extern int DAT_0080dacc;
extern int DAT_0080dac8;
extern int DAT_0080dac4;
extern int DAT_0080dab8;
extern int DAT_007f2294;
extern int DAT_007dc144;
extern int DAT_007f2290;
extern int DAT_007dad9c;
extern int DAT_007dada4;
extern int DAT_007dada8;
extern int DAT_007dadac;
extern int DAT_007dadb0;
extern int DAT_007dadb4;
extern int DAT_007dadb8;

__declspec(naked) void FUN_005bcc70(void)
{
    __asm {
        push    esi
        xor     esi, esi
        push    0x14
        mov     dword ptr [DAT_0080daf0], esi
        mov     dword ptr [DAT_0080daec], esi
        mov     dword ptr [DAT_0080dae4], esi
        mov     dword ptr [DAT_0080dae8], esi
        mov     dword ptr [DAT_0080dae0], esi
        mov     dword ptr [DAT_0080dadc], esi
        mov     dword ptr [DAT_0080dad8], esi
        mov     dword ptr [DAT_0080dad4], esi
        mov     dword ptr [DAT_0080dad0], esi
        mov     dword ptr [DAT_0080dac0], esi
        mov     dword ptr [DAT_0080dabc], esi
        mov     dword ptr [DAT_0080dacc], esi
        mov     dword ptr [DAT_0080dac8], esi
        mov     dword ptr [DAT_0080dac4], esi
        mov     dword ptr [DAT_0080dab8], esi
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, esi
        jz      l_skip
        mov     ecx, dword ptr [DAT_007dc144]
        push    ecx
        push    0x78712c
        push    0x47e
        mov     ecx, eax
        call    FUN_004151c0
        mov     dword ptr [DAT_007f2294], eax
        jmp     l_done
    l_skip:
        mov     dword ptr [DAT_007f2294], esi
    l_done:
        call    FUN_00637ef0
        push    0x400
        call    FUN_004084d0
        mov     dword ptr [DAT_007f2290], eax
        mov     eax, 2
        add     esp, 4
        mov     dword ptr [DAT_007dad9c], eax
        mov     dword ptr [DAT_007dada4], eax
        mov     dword ptr [DAT_007dada8], eax
        mov     dword ptr [DAT_007dadac], eax
        mov     dword ptr [DAT_007dadb0], eax
        mov     dword ptr [DAT_007dadb4], eax
        mov     dword ptr [DAT_007dadb8], eax
        pop     esi
        ret
    }
}
