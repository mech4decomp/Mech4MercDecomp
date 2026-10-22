/*
 * FUN_006236a0 (3239 B) — Switch dispatcher that formats a string into the
 * global buffer at 0x7f2bac based on the value at [this+4].
 *
 * __fastcall (ECX = this), returns pointer to 0x7f2bac.
 *
 * Structure: prologue, then a jump-table dispatch on [this+4] (0..0x35).
 * Most cases call a virtual method (vtable+0x34) with a constant, then
 * sprintf("%s:", result) into 0x7f2bac and return. Case 0x2b is special:
 * it formats a team name (or "Team %d" / "?").
 *
 * The jump table itself lives at 0x624348, just past the function's last
 * byte (function spans 0x6236A0..0x624347), so it is outside the diff range
 * and is not emitted here; the dispatch instruction is __emit'ed verbatim.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7dab44;          /* 0x007dab44 */
extern int g_7dab40;          /* 0x007dab40 */
extern char g_7dc694;         /* 0x007dc694 */
extern short g_7dc696;        /* 0x007dc696 */
extern void *g_76b420;        /* IAT: sprintf */

extern void __cdecl FUN_00416bc0(void);
extern void *__cdecl FUN_00416cc0(void);
extern void __cdecl FUN_00416c60(void);

__declspec(naked) void *__fastcall FUN_006236a0(void *param_1)
{
    __asm {
        sub     esp, 0x14
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi + 4]
        cmp     eax, 0x35
        ja      default_case
        /* __emit: MSVC6 re-bases FF 24 85 [eax*4+imm32] via EBX; emit the
           reference dispatch bytes verbatim (jump table at 0x624348). */
__emit 0xFF
__emit 0x24
__emit 0x85
__emit 0x48
__emit 0x43
__emit 0x62
__emit 0x00

    case0:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x320
        call    dword ptr [edx + 0x34]
        push    eax
        push    0x78cfe4
        push    0x7f2bac
        call    dword ptr [g_76b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        mov     eax, 0x7f2bac
        pop     ebx
        add     esp, 0x14
        ret

    case1:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x321
        call    dword ptr [edx + 0x34]
        push    eax
        push    0x78cfe4
        push    0x7f2bac
        call    dword ptr [g_76b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        mov     eax, 0x7f2bac
        pop     ebx
        add     esp, 0x14
        ret

    case2:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x322
        call    dword ptr [edx + 0x34]
        push    eax
        push    0x78cfe4
        push    0x7f2bac
        call    dword ptr [g_76b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        mov     eax, 0x7f2bac
        pop     ebx
        add     esp, 0x14
        ret

    case3:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x323
        call    dword ptr [edx + 0x34]
        push    eax
        push    0x78cfe4
        push    0x7f2bac
        call    dword ptr [g_76b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        mov     eax, 0x7f2bac
        pop     ebx
        add     esp, 0x14
        ret

    case4:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x324
        call    dword ptr [edx + 0x34]
        push    eax
        push    0x78cfe4
        push    0x7f2bac
        call    dword ptr [g_76b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        mov     eax, 0x7f2bac
        pop     ebx
        add     esp, 0x14
        ret

    case5:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x342
        call    dword ptr [edx + 0x34]
        push    eax
        push    0x78cfe4
        push    0x7f2bac
        call    dword ptr [g_76b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        mov     eax, 0x7f2bac
        pop     ebx
        add     esp, 0x14
        ret

    case6:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x343
        call    dword ptr [edx + 0x34]
        push    eax
        push    0x78cfe4
        push    0x7f2bac
        call    dword ptr [g_76b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        mov     eax, 0x7f2bac
        pop     ebx
        add     esp, 0x14
        ret

    case7:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x344
        call    dword ptr [edx + 0x34]
        push    eax
        push    0x78cfe4
        push    0x7f2bac
        call    dword ptr [g_76b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        mov     eax, 0x7f2bac
        pop     ebx
        add     esp, 0x14
        ret

    case8:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x325
        call    dword ptr [edx + 0x34]
        push    eax
        push    0x78cfe4
        push    0x7f2bac
        call    dword ptr [g_76b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        mov     eax, 0x7f2bac
        pop     ebx
        add     esp, 0x14
        ret

    case9:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x327
        call    dword ptr [edx + 0x34]
        push    eax
        push    0x78cfe4
        push    0x7f2bac
        call    dword ptr [g_76b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        mov     eax, 0x7f2bac
        pop     ebx
        add     esp, 0x14
        ret

    case10:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x345
        call    dword ptr [edx + 0x34]
        push    eax
        push    0x78cfe4
        push    0x7f2bac
        call    dword ptr [g_76b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        mov     eax, 0x7f2bac
        pop     ebx
        add     esp, 0x14
        ret

    case11:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x346
        call    dword ptr [edx + 0x34]
        push    eax
        push    0x78cfe4
        push    0x7f2bac
        call    dword ptr [g_76b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        mov     eax, 0x7f2bac
        pop     ebx
        add     esp, 0x14
        ret

    case12:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x328
        call    dword ptr [edx + 0x34]
        push    eax
        push    0x78cfe4
        push    0x7f2bac
        call    dword ptr [g_76b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        mov     eax, 0x7f2bac
        pop     ebx
        add     esp, 0x14
        ret

    case13:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x347
        call    dword ptr [edx + 0x34]
        push    eax
        push    0x78cfe4
        push    0x7f2bac
        call    dword ptr [g_76b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        mov     eax, 0x7f2bac
        pop     ebx
        add     esp, 0x14
        ret

    case14:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x348
        call    dword ptr [edx + 0x34]
        push    eax
        push    0x78cfe4
        push    0x7f2bac
        call    dword ptr [g_76b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        mov     eax, 0x7f2bac
        pop     ebx
        add     esp, 0x14
        ret

    case15:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x329
        call    dword ptr [edx + 0x34]
        push    eax
        push    0x78cfe4
        push    0x7f2bac
        call    dword ptr [g_76b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        mov     eax, 0x7f2bac
        pop     ebx
        add     esp, 0x14
        ret

    case16:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x32a
        call    dword ptr [edx + 0x34]
        push    eax
        push    0x78cfe4
        push    0x7f2bac
        call    dword ptr [g_76b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        mov     eax, 0x7f2bac
        pop     ebx
        add     esp, 0x14
        ret

    case17:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x32b
        call    dword ptr [edx + 0x34]
        push    eax
        push    0x78cfe4
        push    0x7f2bac
        call    dword ptr [g_76b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        mov     eax, 0x7f2bac
        pop     ebx
        add     esp, 0x14
        ret

    case18:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x32c
        call    dword ptr [edx + 0x34]
        push    eax
        push    0x78cfe4
        push    0x7f2bac
        call    dword ptr [g_76b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        mov     eax, 0x7f2bac
        pop     ebx
        add     esp, 0x14
        ret

    case19:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x32d
        call    dword ptr [edx + 0x34]
        push    eax
        push    0x78cfe4
        push    0x7f2bac
        call    dword ptr [g_76b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        mov     eax, 0x7f2bac
        pop     ebx
        add     esp, 0x14
        ret

    case20:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x32e
        call    dword ptr [edx + 0x34]
        push    eax
        push    0x78cfe4
        push    0x7f2bac
        call    dword ptr [g_76b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        mov     eax, 0x7f2bac
        pop     ebx
        add     esp, 0x14
        ret

    case21:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x32f
        call    dword ptr [edx + 0x34]
        push    eax
        push    0x78cfe4
        push    0x7f2bac
        call    dword ptr [g_76b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        mov     eax, 0x7f2bac
        pop     ebx
        add     esp, 0x14
        ret

    case22:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x330
        call    dword ptr [edx + 0x34]
        push    eax
        push    0x78cfe4
        push    0x7f2bac
        call    dword ptr [g_76b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        mov     eax, 0x7f2bac
        pop     ebx
        add     esp, 0x14
        ret

    case23:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x331
        call    dword ptr [edx + 0x34]
        push    eax
        push    0x78cfe4
        push    0x7f2bac
        call    dword ptr [g_76b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        mov     eax, 0x7f2bac
        pop     ebx
        add     esp, 0x14
        ret

    case24:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x332
        call    dword ptr [edx + 0x34]
        push    eax
        push    0x78cfe4
        push    0x7f2bac
        call    dword ptr [g_76b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        mov     eax, 0x7f2bac
        pop     ebx
        add     esp, 0x14
        ret

    case25:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x333
        call    dword ptr [edx + 0x34]
        push    eax
        push    0x78cfe4
        push    0x7f2bac
        call    dword ptr [g_76b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        mov     eax, 0x7f2bac
        pop     ebx
        add     esp, 0x14
        ret

    case26:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x334
        call    dword ptr [edx + 0x34]
        push    eax
        push    0x78cfe4
        push    0x7f2bac
        call    dword ptr [g_76b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        mov     eax, 0x7f2bac
        pop     ebx
        add     esp, 0x14
        ret

    case27:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x341
        call    dword ptr [edx + 0x34]
        push    eax
        push    0x78cfe4
        push    0x7f2bac
        call    dword ptr [g_76b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        mov     eax, 0x7f2bac
        pop     ebx
        add     esp, 0x14
        ret

    case28:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x340
        call    dword ptr [edx + 0x34]
        push    eax
        push    0x78cfe4
        push    0x7f2bac
        call    dword ptr [g_76b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        mov     eax, 0x7f2bac
        pop     ebx
        add     esp, 0x14
        ret

    case29:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x337
        call    dword ptr [edx + 0x34]
        push    eax
        push    0x78cfe4
        push    0x7f2bac
        call    dword ptr [g_76b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        mov     eax, 0x7f2bac
        pop     ebx
        add     esp, 0x14
        ret

    case30:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x338
        call    dword ptr [edx + 0x34]
        push    eax
        push    0x78cfe4
        push    0x7f2bac
        call    dword ptr [g_76b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        mov     eax, 0x7f2bac
        pop     ebx
        add     esp, 0x14
        ret

    case31:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x339
        call    dword ptr [edx + 0x34]
        push    eax
        push    0x78cfe4
        push    0x7f2bac
        call    dword ptr [g_76b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        mov     eax, 0x7f2bac
        pop     ebx
        add     esp, 0x14
        ret

    case32:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x33a
        call    dword ptr [edx + 0x34]
        push    eax
        push    0x78cfe4
        push    0x7f2bac
        call    dword ptr [g_76b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        mov     eax, 0x7f2bac
        pop     ebx
        add     esp, 0x14
        ret

    case33:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x33b
        call    dword ptr [edx + 0x34]
        push    eax
        push    0x78cfe4
        push    0x7f2bac
        call    dword ptr [g_76b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        mov     eax, 0x7f2bac
        pop     ebx
        add     esp, 0x14
        ret

    case34:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x33c
        call    dword ptr [edx + 0x34]
        push    eax
        push    0x78cfe4
        push    0x7f2bac
        call    dword ptr [g_76b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        mov     eax, 0x7f2bac
        pop     ebx
        add     esp, 0x14
        ret

    case35:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x33d
        call    dword ptr [edx + 0x34]
        push    eax
        push    0x78cfe4
        push    0x7f2bac
        call    dword ptr [g_76b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        mov     eax, 0x7f2bac
        pop     ebx
        add     esp, 0x14
        ret

    case36:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x34c
        call    dword ptr [edx + 0x34]
        push    eax
        push    0x78cfe4
        push    0x7f2bac
        call    dword ptr [g_76b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        mov     eax, 0x7f2bac
        pop     ebx
        add     esp, 0x14
        ret

    case37:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x34b
        call    dword ptr [edx + 0x34]
        push    eax
        push    0x78cfe4
        push    0x7f2bac
        call    dword ptr [g_76b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        mov     eax, 0x7f2bac
        pop     ebx
        add     esp, 0x14
        ret

    case38:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x34d
        call    dword ptr [edx + 0x34]
        push    eax
        push    0x78cfe4
        push    0x7f2bac
        call    dword ptr [g_76b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        mov     eax, 0x7f2bac
        pop     ebx
        add     esp, 0x14
        ret

    case39:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x34e
        call    dword ptr [edx + 0x34]
        push    eax
        push    0x78cfe4
        push    0x7f2bac
        call    dword ptr [g_76b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        mov     eax, 0x7f2bac
        pop     ebx
        add     esp, 0x14
        ret

    case40:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x350
        call    dword ptr [edx + 0x34]
        push    eax
        push    0x78cfe4
        push    0x7f2bac
        call    dword ptr [g_76b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        mov     eax, 0x7f2bac
        pop     ebx
        add     esp, 0x14
        ret

    case41:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x351
        call    dword ptr [edx + 0x34]
        push    eax
        push    0x78cfe4
        push    0x7f2bac
        call    dword ptr [g_76b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        mov     eax, 0x7f2bac
        pop     ebx
        add     esp, 0x14
        ret

    case42:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x355
        call    dword ptr [edx + 0x34]
        push    eax
        push    0x78cfe4
        push    0x7f2bac
        call    dword ptr [g_76b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        mov     eax, 0x7f2bac
        pop     ebx
        add     esp, 0x14
        ret

    case43:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x354
        call    dword ptr [edx + 0x34]
        push    eax
        push    0x78cfe4
        push    0x7f2bac
        call    dword ptr [g_76b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        mov     eax, 0x7f2bac
        pop     ebx
        add     esp, 0x14
        ret

    case44:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x35c
        call    dword ptr [edx + 0x34]
        push    eax
        push    0x78cfe4
        push    0x7f2bac
        call    dword ptr [g_76b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        mov     eax, 0x7f2bac
        pop     ebx
        add     esp, 0x14
        ret

    case45:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x35e
        call    dword ptr [edx + 0x34]
        push    eax
        push    0x78cfe4
        push    0x7f2bac
        call    dword ptr [g_76b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        mov     eax, 0x7f2bac
        pop     ebx
        add     esp, 0x14
        ret

    case_2b:
        mov     eax, dword ptr [edi + 8]
        test    eax, eax
        jge     team_ge
        neg     eax
        push    eax
        push    0x78cfd8
        push    0x7f2bac
        call    dword ptr [g_76b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        mov     eax, 0x7f2bac
        pop     ebx
        add     esp, 0x14
        ret

    team_ge:
        mov     al, byte ptr [edi + 0x18]
        cmp     al, byte ptr [g_7dc694]
        jnz     team_check2
        mov     cx, word ptr [edi + 0x1a]
        cmp     cx, word ptr [g_7dc696]
        jz      team_question

    team_check2:
        mov     eax, dword ptr [g_7dab44]
        mov     edx, dword ptr [eax]
        mov     ecx, dword ptr [g_7dab40]
        xor     edx, ecx
        mov     edx, dword ptr [edx + 0x20]
        xor     edx, 0x85739531
        jz      team_question
        mov     eax, dword ptr [eax]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x20]
        xor     ecx, 0x85739531
        add     ecx, 0x19c
        push    ecx
        lea     ecx, [esp + 0x10]
        call    FUN_00416bc0
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0xc], 0x78cf94
        call    FUN_00416cc0
        test    eax, eax
        jz      team_cleanup

    team_loop:
        mov     bl, byte ptr [edi + 0x18]
        mov     cl, byte ptr [eax + 0x10]
        cmp     cl, bl
        mov     si, word ptr [eax + 0x12]
        jnz     team_next
        cmp     si, word ptr [edi + 0x1a]
        jz      team_found

    team_next:
        lea     ecx, [esp + 0xc]
        call    FUN_00416cc0
        test    eax, eax
        jz      team_cleanup
        /* __emit: backward jmp rel-offset miscomputed by MSVC6 (off-by-3
           because a call-reloc sits between branch and target); ref EB E0. */
        __emit 0xEB
        __emit 0xE0

    team_found:
        mov     edx, dword ptr [eax + 0x1c]
        push    edx
        push    0x76c690
        push    0x7f2bac
        call    dword ptr [g_76b420]
        add     esp, 0xc
        lea     ecx, [esp + 0xc]
        call    FUN_00416c60
        pop     edi
        pop     esi
        mov     eax, 0x7f2bac
        pop     ebx
        add     esp, 0x14
        ret

    team_cleanup:
        lea     ecx, [esp + 0xc]
        call    FUN_00416c60

    team_question:
        push    0x78cfd4
        push    0x7f2bac
        call    dword ptr [g_76b420]
        add     esp, 0x8

    default_case:
        pop     edi
        pop     esi
        mov     eax, 0x7f2bac
        pop     ebx
        add     esp, 0x14
        ret
    }
}
