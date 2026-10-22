/*
 * FUN_0053ce70 (193 B) — __fastcall, RET 0x4.
 * Broadcasts a network event to all connected players (0-254).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

/* External function declarations */
extern void __fastcall FUN_0041ee70(int param1);
extern void __fastcall FUN_0041f030(void *param1, int param2);
extern int __fastcall FUN_004cdfa0(int param1);
extern int __fastcall FUN_004ce190(int param1, int param2, void *param3, int param4);
extern void __fastcall FUN_0041ef60(void *param1);

/* Global data references */
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007db094;

__declspec(naked) void FUN_0053ce70(void)
{
    
__asm {
/* 0x0053CE70: sub esp, 0x28 */
        sub     esp, 0x28

        /* 0x0053CE73: push esi */
        push    esi

        /* 0x0053CE74: push edi */
        push    edi

        /* 0x0053CE75: mov edi, ecx */
        mov     edi, ecx

        /* 0x0053CE77: push 0x0 */
        push    0x0

        /* 0x0053CE79: lea ecx, [esp + 0xc] */
        lea     ecx, [esp + 0xc]

        /* 0x0053CE7D: call 0x0041ee70 */
        call    FUN_0041ee70

        /* 0x0053CE82: push 0x1 */
        push    0x1

        /* 0x0053CE84: lea eax, [esp + 0x38] */
        lea     eax, [esp + 0x38]

        /* 0x0053CE88: push eax */
        push    eax

        /* 0x0053CE89: lea ecx, [esp + 0x10] */
        lea     ecx, [esp + 0x10]

        /* 0x0053CE8D: call 0x0041f030 */
        call    FUN_0041f030

        /* 0x0053CE92: mov edx, [esp + 0x8] */
        mov     edx, [esp + 0x8]

        /* 0x0053CE96: push 0x0 */
        push    0x0

        /* 0x0053CE98: lea ecx, [esp + 0xc] */
        lea     ecx, [esp + 0xc]

        /* 0x0053CE9C: call [edx + 0xc] */
        call    dword ptr [edx + 0xc]

        /* 0x0053CE9F: xor esi, esi */
        xor     esi, esi

        /* 0x0053CEA1: mov [esp + 0x10], 0xffffffec */
        mov     dword ptr [esp + 0x10], 0xffffffec

        /* 0x0053CEA9: add edi, 0x353b */
        add     edi, 0x353b

    loop_start:
        /* 0x0053CEAF: mov eax, [0x007dab44] */
        mov     eax, dword ptr [DAT_007dab44]

        /* 0x0053CEB4: mov eax, [eax] */
        mov     eax, [eax]

        /* 0x0053CEB6: xor eax, [0x007dab40] */
        xor     eax, dword ptr [DAT_007dab40]

        /* 0x0053CEBC: mov ecx, [eax + 0x14] */
        mov     ecx, [eax + 0x14]

        /* 0x0053CEBF: push esi */
        push    esi

        /* 0x0053CEC0: xor ecx, 0x85739531 */
        xor     ecx, 0x85739531

        /* 0x0053CEC6: call 0x004cdfa0 */
        call    FUN_004cdfa0

        /* 0x0053CECB: test eax, eax */
        test    eax, eax

        /* 0x0053CECD: jz loop_next */
        jz      loop_next

        /* 0x0053CECF: mov edx, [0x007db094] */
        mov     edx, dword ptr [DAT_007db094]

        /* 0x0053CED5: xor ecx, ecx */
        xor     ecx, ecx

        /* 0x0053CED7: mov cl, [edx + 0x28] */
        mov     cl, [edx + 0x28]

        /* 0x0053CEDA: cmp esi, ecx */
        cmp     esi, ecx

        /* 0x0053CEDC: jz loop_next */
        jz      loop_next

        /* 0x0053CEDE: cmp esi, [esp + 0x34] */
        cmp     esi, [esp + 0x34]

        /* 0x0053CEE2: jz loop_next */
        jz      loop_next

        /* 0x0053CEE4: cmp byte ptr [edi], 0x0 */
        cmp     byte ptr [edi], 0x0

        /* 0x0053CEE7: jz loop_next */
        jz      loop_next

        /* 0x0053CEE9: mov ecx, [0x007dab44] */
        mov     ecx, dword ptr [DAT_007dab44]

        /* 0x0053CEEF: mov edx, [ecx] */
        mov     edx, [ecx]

        /* 0x0053CEF1: mov ecx, [0x007dab40] */
        mov     ecx, dword ptr [DAT_007dab40]

        /* 0x0053CEF7: push 0x1 */
        push    0x1

        /* 0x0053CEF9: lea eax, [esp + 0xc] */
        lea     eax, [esp + 0xc]

        /* 0x0053CEFD: push eax */
        push    eax

        /* 0x0053CEFE: xor edx, ecx */
        xor     edx, ecx

        /* 0x0053CF00: mov ecx, [edx + 0x14] */
        mov     ecx, [edx + 0x14]

        /* 0x0053CF03: push 0x10 */
        push    0x10

        /* 0x0053CF05: push esi */
        push    esi

        /* 0x0053CF06: xor ecx, 0x85739531 */
        xor     ecx, 0x85739531

        /* 0x0053CF0C: call 0x004ce190 */
        call    FUN_004ce190

    loop_next:
        /* 0x0053CF11: inc esi */
        inc     esi

        /* 0x0053CF12: add edi, 0x2038 */
        add     edi, 0x2038

        /* 0x0053CF18: cmp esi, 0xff */
        cmp     esi, 0xff

        /* 0x0053CF1E: jl loop_start */
        jl      loop_start

        /* 0x0053CF20: lea ecx, [esp + 0x8] */
        lea     ecx, [esp + 0x8]

        /* 0x0053CF24: call 0x0041ef60 */
        call    FUN_0041ef60

        /* 0x0053CF29: pop edi */
        pop     edi

        /* 0x0053CF2A: pop esi */
        pop     esi

        /* 0x0053CF2B: add esp, 0x28 */
        add     esp, 0x28

        /* 0x0053CF2E: ret 0x4 */
        ret     0x4
    }


}
