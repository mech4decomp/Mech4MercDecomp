/*
 * FUN_0053d0b0 (176 B) — __cdecl.
 * Iterates over a list and calls a processing function for each element.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

/* External function declarations */
extern int __fastcall FUN_00621650(int param1, int param2);

/* Global data references */
extern int DAT_007dab44;
extern int DAT_007dab40;

__declspec(naked) void FUN_0053d0b0(void)
{
    
__asm {
/* 0x0053D0B0: sub esp, 0xc */
        sub     esp, 0xc

        /* 0x0053D0B3: mov eax, [0x007dab44] */
        mov     eax, dword ptr [DAT_007dab44]

        /* 0x0053D0B8: mov ecx, [eax] */
        mov     ecx, [eax]

        /* 0x0053D0BA: mov edx, [0x007dab40] */
        mov     edx, dword ptr [DAT_007dab40]

        /* 0x0053D0C0: push ebx */
        push    ebx

        /* 0x0053D0C1: push esi */
        push    esi

        /* 0x0053D0C2: mov esi, [esp + 0x18] */
        mov     esi, [esp + 0x18]

        /* 0x0053D0C6: push edi */
        push    edi

        /* 0x0053D0C7: xor ecx, edx */
        xor     ecx, edx

        /* 0x0053D0C9: mov edi, [ecx + 0x20] */
        mov     edi, [ecx + 0x20]

        /* 0x0053D0CC: mov edx, [esi] */
        mov     edx, [esi]

        /* 0x0053D0CE: push 0x1 */
        push    0x1

        /* 0x0053D0D0: lea eax, [esp + 0x10] */
        lea     eax, [esp + 0x10]

        /* 0x0053D0D4: xor ebx, ebx */
        xor     ebx, ebx

        /* 0x0053D0D6: push eax */
        push    eax

        /* 0x0053D0D7: mov ecx, esi */
        mov     ecx, esi

        /* 0x0053D0D9: xor edi, 0x85739531 */
        xor     edi, 0x85739531

        /* 0x0053D0DF: mov [esp + 0x14], ebx */
        mov     [esp + 0x14], ebx

        /* 0x0053D0E3: call [edx + 0x20] */
        call    dword ptr [edx + 0x20]

        /* 0x0053D0E6: mov ecx, [esp + 0xc] */
        mov     ecx, [esp + 0xc]

        /* 0x0053D0EA: xor al, al */
        xor     al, al

        /* 0x0053D0EC: cmp ecx, ebx */
        cmp     ecx, ebx

        /* 0x0053D0EE: mov [esp + 0x1c], al */
        mov     [esp + 0x1c], al

        /* 0x0053D0F2: mov [esp + 0x14], ebx */
        mov     [esp + 0x14], ebx

        /* 0x0053D0F6: jle epilogue */
        jle     epilogue

        /* 0x0053D0F8: mov edi, [edi + 0x225c] */
        mov     edi, [edi + 0x225c]

        /* 0x0053D0FE: push ebp */
        push    ebp

        /* 0x0053D0FF: mov ebp, [esp + 0x24] */
        mov     ebp, [esp + 0x24]

    loop_start:
        /* 0x0053D103: mov edx, [esi] */
        mov     edx, [esi]

        /* 0x0053D105: push 0x1 */
        push    0x1

        /* 0x0053D107: lea eax, [esp + 0x28] */
        lea     eax, [esp + 0x28]

        /* 0x0053D10B: push eax */
        push    eax

        /* 0x0053D10C: mov ecx, esi */
        mov     ecx, esi

        /* 0x0053D10E: mov [esp + 0x2c], ebx */
        mov     [esp + 0x2c], ebx

        /* 0x0053D112: call [edx + 0x20] */
        call    dword ptr [edx + 0x20]

        /* 0x0053D115: mov edx, [esi] */
        mov     edx, [esi]

        /* 0x0053D117: push 0x4 */
        push    0x4

        /* 0x0053D119: lea eax, [esp + 0x18] */
        lea     eax, [esp + 0x18]

        /* 0x0053D11D: push eax */
        push    eax

        /* 0x0053D11E: mov ecx, esi */
        mov     ecx, esi

        /* 0x0053D120: mov [esp + 0x1c], ebx */
        mov     [esp + 0x1c], ebx

        /* 0x0053D124: call [edx + 0x20] */
        call    dword ptr [edx + 0x20]

        /* 0x0053D127: mov ecx, [esp + 0x24] */
        mov     ecx, [esp + 0x24]

        /* 0x0053D12B: push ecx */
        push    ecx

        /* 0x0053D12C: push ebp */
        push    ebp

        /* 0x0053D12D: mov ecx, edi */
        mov     ecx, edi

        /* 0x0053D12F: call 0x00621650 */
        call    FUN_00621650

        /* 0x0053D134: cmp eax, ebx */
        cmp     eax, ebx

        /* 0x0053D136: jz skip_store */
        jz      skip_store

        /* 0x0053D138: mov edx, [esp + 0x14] */
        mov     edx, [esp + 0x14]

        /* 0x0053D13C: mov [eax], edx */
        mov     [eax], edx

        /* 0x0053D13E: mov byte ptr [esp + 0x20], 0x1 */
        mov     byte ptr [esp + 0x20], 0x1

    skip_store:
        /* 0x0053D143: mov eax, [esp + 0x18] */
        mov     eax, [esp + 0x18]

        /* 0x0053D147: mov ecx, [esp + 0x10] */
        mov     ecx, [esp + 0x10]

        /* 0x0053D14B: inc eax */
        inc     eax

        /* 0x0053D14C: cmp eax, ecx */
        cmp     eax, ecx

        /* 0x0053D14E: mov [esp + 0x18], eax */
        mov     [esp + 0x18], eax

        /* 0x0053D152: jl loop_start */
        jl      loop_start

        /* 0x0053D154: mov al, [esp + 0x20] */
        mov     al, [esp + 0x20]

        /* 0x0053D158: pop ebp */
        pop     ebp

    epilogue:
        /* 0x0053D159: pop edi */
        pop     edi

        /* 0x0053D15A: pop esi */
        pop     esi

        /* 0x0053D15B: pop ebx */
        pop     ebx

        /* 0x0053D15C: add esp, 0xc */
        add     esp, 0xc

        /* 0x0053D15F: ret */
        ret
    }


}
