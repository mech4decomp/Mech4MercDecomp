/*
 * FUN_0053cd70 (250 B) — __thiscall, RET 0x8.
 * Processes a network/player event with virtual dispatch and cleanup.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

/* External function declarations */
extern int __fastcall FUN_004f93b0(int param1);
extern void __cdecl FUN_0052dbb0(void);
extern int __fastcall FUN_004cdfa0(int param1);
extern void __fastcall FUN_004ceb20(int param1);

/* Global data references */
extern int DAT_007dab44;
extern int DAT_007dab40;

__declspec(naked) void FUN_0053cd70(void)
{
    
__asm {
/* 0x0053CD70: push ecx (local var) */
        push    ecx

        /* 0x0053CD71: push esi */
        push    esi

        /* 0x0053CD72: push edi */
        push    edi

        /* 0x0053CD73: mov esi, ecx */
        mov     esi, ecx

        /* 0x0053CD75: mov ecx, [esp + 0x14] */
        mov     ecx, [esp + 0x14]

        /* 0x0053CD79: mov eax, [ecx] */
        mov     eax, [ecx]

        /* 0x0053CD7B: push 0x1 */
        push    0x1

        /* 0x0053CD7D: lea edx, [esp + 0xc] */
        lea     edx, [esp + 0xc]

        /* 0x0053CD81: push edx */
        push    edx

        /* 0x0053CD82: mov byte ptr [esp + 0x10], 0x0 */
        mov     byte ptr [esp + 0x10], 0x0

        /* 0x0053CD87: call [eax + 0x20] */
        call    dword ptr [eax + 0x20]

        /* 0x0053CD8A: mov eax, [0x007dab44] */
        mov     eax, dword ptr [DAT_007dab44]

        /* 0x0053CD8F: mov ecx, [0x007dab40] */
        mov     ecx, dword ptr [DAT_007dab40]

        /* 0x0053CD95: mov edx, [eax] */
        mov     edx, [eax]

        /* 0x0053CD97: xor edx, ecx */
        xor     edx, ecx

        /* 0x0053CD99: mov ecx, [edx + 0x20] */
        mov     ecx, [edx + 0x20]

        /* 0x0053CD9C: xor ecx, 0x85739531 */
        xor     ecx, 0x85739531

        /* 0x0053CDA2: jz skip_extra */
        jz      skip_extra

        /* 0x0053CDA4: mov ecx, [esp + 0x8] */
        mov     ecx, [esp + 0x8]

        /* 0x0053CDA8: mov eax, ecx */
        mov     eax, ecx

        /* 0x0053CDAA: and eax, 0xff */
        and     eax, 0xff

        /* 0x0053CDAF: mov edi, eax */
        mov     edi, eax

        /* 0x0053CDB1: shl edi, 7 */
        shl     edi, 7

        /* 0x0053CDB4: add edi, eax */
        add     edi, eax

        /* 0x0053CDB6: shl edi, 3 */
        shl     edi, 3

        /* 0x0053CDB9: sub edi, eax */
        sub     edi, eax

        /* 0x0053CDBB: mov eax, [esi + edi*8 + 0x3584] */
        mov     eax, [esi + edi*8 + 0x3584]

        /* 0x0053CDC2: test eax, eax */
        test    eax, eax

        /* 0x0053CDC4: jz after_extra */
        jz      after_extra

        /* 0x0053CDC6: mov eax, [eax + 0x170] */
        mov     eax, [eax + 0x170]

        /* 0x0053CDCC: test eax, eax */
        test    eax, eax

        /* 0x0053CDCE: jz after_extra */
        jz      after_extra

        /* 0x0053CDD0: mov ecx, [edx + 0x20] */
        mov     ecx, [edx + 0x20]

        /* 0x0053CDD3: add eax, 0x14 */
        add     eax, 0x14

        /* 0x0053CDD6: push eax */
        push    eax

        /* 0x0053CDD7: xor ecx, 0x85739531 */
        xor     ecx, 0x85739531

        /* 0x0053CDDD: call 0x004f93b0 */
        call    FUN_004f93b0

        /* 0x0053CDE2: test eax, eax */
        test    eax, eax

        /* 0x0053CDE4: jz skip_extra */
        jz      skip_extra

        /* 0x0053CDE6: mov edx, [eax] */
        mov     edx, [eax]

        /* 0x0053CDE8: push 0x1 */
        push    0x1

        /* 0x0053CDEA: mov ecx, eax */
        mov     ecx, eax

        /* 0x0053CDEC: call [edx] */
        call    dword ptr [edx]

    skip_extra:
        /* 0x0053CDEE: mov ecx, [esp + 0x8] */
        mov     ecx, [esp + 0x8]

    after_extra:
        /* 0x0053CDF2: and ecx, 0xff */
        and     ecx, 0xff

        /* 0x0053CDF8: mov eax, ecx */
        mov     eax, ecx

        /* 0x0053CDFA: shl ecx, 7 */
        shl     ecx, 7

        /* 0x0053CDFD: add ecx, eax */
        add     ecx, eax

        /* 0x0053CDFF: shl ecx, 3 */
        shl     ecx, 3

        /* 0x0053CE02: sub ecx, eax */
        sub     ecx, eax

        /* 0x0053CE04: lea ecx, [esi + ecx*8 + 0x3538] */
        lea     ecx, [esi + ecx*8 + 0x3538]

        /* 0x0053CE0B: call 0x0052dbb0 */
        call    FUN_0052dbb0

        /* 0x0053CE10: mov edx, [0x007dab44] */
        mov     edx, dword ptr [DAT_007dab44]

        /* 0x0053CE16: mov ecx, [esp + 0x8] */
        mov     ecx, [esp + 0x8]

        /* 0x0053CE1A: mov eax, [edx] */
        mov     eax, [edx]

        /* 0x0053CE1C: mov edi, [0x007dab40] */
        mov     edi, dword ptr [DAT_007dab40]

        /* 0x0053CE22: and ecx, 0xff */
        and     ecx, 0xff

        /* 0x0053CE28: xor eax, edi */
        xor     eax, edi

        /* 0x0053CE2A: push ecx */
        push    ecx

        /* 0x0053CE2B: mov ecx, [eax + 0x14] */
        mov     ecx, [eax + 0x14]

        /* 0x0053CE2E: xor ecx, 0x85739531 */
        xor     ecx, 0x85739531

        /* 0x0053CE34: call 0x004cdfa0 */
        call    FUN_004cdfa0

        /* 0x0053CE39: test eax, eax */
        test    eax, eax

        /* 0x0053CE3B: jz skip_cleanup */
        jz      skip_cleanup

        /* 0x0053CE3D: mov ecx, eax */
        mov     ecx, eax

        /* 0x0053CE3F: call 0x004ceb20 */
        call    FUN_004ceb20

    skip_cleanup:
        /* 0x0053CE44: mov eax, [esp + 0x8] */
        mov     eax, [esp + 0x8]

        /* 0x0053CE48: and eax, 0xff */
        and     eax, 0xff

        /* 0x0053CE4D: mov edx, eax */
        mov     edx, eax

        /* 0x0053CE4F: shl edx, 7 */
        shl     edx, 7

        /* 0x0053CE52: add edx, eax */
        add     edx, eax

        /* 0x0053CE54: shl edx, 3 */
        shl     edx, 3

        /* 0x0053CE57: sub edx, eax */
        sub     edx, eax

        /* 0x0053CE59: pop edi */
        pop     edi

        /* 0x0053CE5A: mov [esi + edx*8 + 0x3584], 0 */
        mov     dword ptr [esi + edx*8 + 0x3584], 0

        /* 0x0053CE65: pop esi */
        pop     esi

        /* 0x0053CE66: pop ecx */
        pop     ecx

        /* 0x0053CE67: ret 0x8 */
        ret     0x8
    }


}
