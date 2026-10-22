/*
 * FUN_0053d5e0 (306 B) — __cdecl.
 * Processes a list of items and sends results via virtual calls.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

/* External function declarations */
extern int __fastcall FUN_006215e0(int param1);
extern int __fastcall FUN_00621610(int param1, int param2);
extern char __fastcall FUN_00624510(void);
extern void __fastcall FUN_00547c20(void *param1, void *param2);
extern void __fastcall FUN_00547fd0(void *param1, void *param2, int param3);
extern int __fastcall FUN_00624420(void);
extern void __stdcall FUN_004084e0(int ptr);

/* Global data references */
extern int DAT_007dab44;
extern int DAT_007dab40;

__declspec(naked) void FUN_0053d5e0(void)
{
    
__asm {
/* 0x0053D5E0: sub esp, 0x14 */
        sub     esp, 0x14

        /* 0x0053D5E3: mov eax, [0x007dab44] */
        mov     eax, dword ptr [DAT_007dab44]

        /* 0x0053D5E8: mov ecx, [eax] */
        mov     ecx, [eax]

        /* 0x0053D5EA: push ebx */
        push    ebx

        /* 0x0053D5EB: push ebp */
        push    ebp

        /* 0x0053D5EC: mov ebp, [esp + 0x24] */
        mov     ebp, [esp + 0x24]

        /* 0x0053D5F0: push esi */
        push    esi

        /* 0x0053D5F1: xor ecx, [0x007dab40] */
        xor     ecx, dword ptr [DAT_007dab40]

        /* 0x0053D5F7: mov esi, [ecx + 0x20] */
        mov     esi, [ecx + 0x20]

        /* 0x0053D5FA: push edi */
        push    edi

        /* 0x0053D5FB: xor esi, 0x85739531 */
        xor     esi, 0x85739531

        /* 0x0053D601: mov ecx, [esi + 0x225c] */
        mov     ecx, [esi + 0x225c]

        /* 0x0053D607: push ebp */
        push    ebp

        /* 0x0053D608: call 0x006215e0 */
        call    FUN_006215e0

        /* 0x0053D60D: lea edx, [esp + 0x10] */
        lea     edx, [esp + 0x10]

        /* 0x0053D611: mov ebx, eax */
        mov     ebx, eax

        /* 0x0053D613: xor edi, edi */
        xor     edi, edi

        /* 0x0053D615: push edx */
        push    edx

        /* 0x0053D616: lea eax, [esp + 0x30] */
        lea     eax, [esp + 0x30]

        /* 0x0053D61A: push eax */
        push    eax

        /* 0x0053D61B: lea ecx, [esp + 0x28] */
        lea     ecx, [esp + 0x28]

        /* 0x0053D61F: mov [esp + 0x20], edi */
        mov     [esp + 0x20], edi

        /* 0x0053D623: mov [esp + 0x24], edi */
        mov     [esp + 0x24], edi

        /* 0x0053D627: mov [esp + 0x18], edi */
        mov     [esp + 0x18], edi

        /* 0x0053D62B: call 0x00547c20 */
        call    FUN_00547c20

        /* 0x0053D630: test ebx, ebx */
        test    ebx, ebx

        /* 0x0053D632: jle loop1_done */
        jle     loop1_done

    loop1_start:
        /* 0x0053D634: mov ecx, [esi + 0x225c] */
        mov     ecx, [esi + 0x225c]

        /* 0x0053D63A: push edi */
        push    edi

        /* 0x0053D63B: push ebp */
        push    ebp

        /* 0x0053D63C: call 0x00621610 */
        call    FUN_00621610

        /* 0x0053D641: mov [esp + 0x2c], eax */
        mov     [esp + 0x2c], eax

        /* 0x0053D645: cmp byte ptr [eax + 0x1c], 0x1 */
        cmp     byte ptr [eax + 0x1c], 0x1

        /* 0x0053D649: jnz loop1_next */
        jnz     loop1_next

        /* 0x0053D64B: mov ecx, eax */
        mov     ecx, eax

        /* 0x0053D64D: call 0x00624510 */
        call    FUN_00624510

        /* 0x0053D652: cmp al, 0x1 */
        cmp     al, 0x1

        /* 0x0053D654: jnz loop1_next */
        jnz     loop1_next

        /* 0x0053D656: mov eax, [esp + 0x1c] */
        mov     eax, [esp + 0x1c]

        /* 0x0053D65A: cmp eax, [esp + 0x20] */
        cmp     eax, [esp + 0x20]

        /* 0x0053D65E: jz grow_buffer */
        jz      grow_buffer

        /* 0x0053D660: test eax, eax */
        test    eax, eax

        /* 0x0053D662: jz store_null */
        jz      store_null

        /* 0x0053D664: mov ecx, [esp + 0x2c] */
        mov     ecx, [esp + 0x2c]

        /* 0x0053D668: mov [eax], ecx */
        mov     [eax], ecx

        /* 0x0053D66A: mov eax, [esp + 0x1c] */
        mov     eax, [esp + 0x1c]

    store_null:
        /* 0x0053D66E: add eax, 0x4 */
        add     eax, 0x4

        /* 0x0053D671: mov [esp + 0x1c], eax */
        mov     [esp + 0x1c], eax

        /* 0x0053D675: jmp loop1_next_inc */
        jmp     loop1_next_inc

    grow_buffer:
        /* 0x0053D677: push 0x1 */
        push    0x1

        /* 0x0053D679: lea edx, [esp + 0x30] */
        lea     edx, [esp + 0x30]

        /* 0x0053D67D: push edx */
        push    edx

        /* 0x0053D67E: push eax */
        push    eax

        /* 0x0053D67F: lea ecx, [esp + 0x24] */
        lea     ecx, [esp + 0x24]

        /* 0x0053D683: call 0x00547fd0 */
        call    FUN_00547fd0

    loop1_next:
        /* 0x0053D688: mov eax, [esp + 0x1c] */
        mov     eax, [esp + 0x1c]

    loop1_next_inc:
        /* 0x0053D68C: inc edi */
        inc     edi

        /* 0x0053D68D: cmp edi, ebx */
        cmp     edi, ebx

        /* 0x0053D68F: jl loop1_start */
        jl      loop1_start

        /* 0x0053D691: jmp loop1_done2 */
        jmp     loop1_done2

    loop1_done:
        /* 0x0053D693: mov eax, [esp + 0x1c] */
        mov     eax, [esp + 0x1c]

    loop1_done2:
        /* 0x0053D697: mov ebp, [esp + 0x18] */
        mov     ebp, [esp + 0x18]

        /* 0x0053D69B: mov esi, [esp + 0x28] */
        mov     esi, [esp + 0x28]

        /* 0x0053D69F: sub eax, ebp */
        sub     eax, ebp

        /* 0x0053D6A1: sar eax, 2 */
        sar     eax, 2

        /* 0x0053D6A4: push 0x1 */
        push    0x1

        /* 0x0053D6A6: lea ecx, [esp + 0x18] */
        lea     ecx, [esp + 0x18]

        /* 0x0053D6AA: mov [esp + 0x18], eax */
        mov     [esp + 0x18], eax

        /* 0x0053D6AE: mov eax, [esi] */
        mov     eax, [esi]

        /* 0x0053D6B0: push ecx */
        push    ecx

        /* 0x0053D6B1: mov ecx, esi */
        mov     ecx, esi

        /* 0x0053D6B3: call [eax + 0x24] */
        call    dword ptr [eax + 0x24]

        /* 0x0053D6B6: mov edi, [esp + 0x18] */
        mov     edi, [esp + 0x18]

        /* 0x0053D6BA: cmp edi, [esp + 0x1c] */
        cmp     edi, [esp + 0x1c]

        /* 0x0053D6BE: jz skip_send */
        jz      skip_send

    send_loop:
        /* 0x0053D6C0: mov ecx, [edi] */
        mov     ecx, [edi]

        /* 0x0053D6C2: mov edx, [ecx + 0x4] */
        mov     edx, [ecx + 0x4]

        /* 0x0053D6C5: mov [esp + 0x2c], edx */
        mov     [esp + 0x2c], edx

        /* 0x0053D6C9: call 0x00624420 */
        call    FUN_00624420

        /* 0x0053D6CE: push 0x1 */
        push    0x1

        /* 0x0053D6D0: lea ecx, [esp + 0x30] */
        lea     ecx, [esp + 0x30]

        /* 0x0053D6D4: mov [esp + 0x2c], eax */
        mov     [esp + 0x2c], eax

        /* 0x0053D6D8: mov eax, [esi] */
        mov     eax, [esi]

        /* 0x0053D6DA: push ecx */
        push    ecx

        /* 0x0053D6DB: mov ecx, esi */
        mov     ecx, esi

        /* 0x0053D6DD: call [eax + 0x24] */
        call    dword ptr [eax + 0x24]

        /* 0x0053D6E0: mov edx, [esi] */
        mov     edx, [esi]

        /* 0x0053D6E2: push 0x4 */
        push    0x4

        /* 0x0053D6E4: lea eax, [esp + 0x2c] */
        lea     eax, [esp + 0x2c]

        /* 0x0053D6E8: push eax */
        push    eax

        /* 0x0053D6E9: mov ecx, esi */
        mov     ecx, esi

        /* 0x0053D6EB: call [edx + 0x24] */
        call    dword ptr [edx + 0x24]

        /* 0x0053D6EE: mov eax, [esp + 0x1c] */
        mov     eax, [esp + 0x1c]

        /* 0x0053D6F2: add edi, 0x4 */
        add     edi, 0x4

        /* 0x0053D6F5: cmp edi, eax */
        cmp     edi, eax

        /* 0x0053D6F7: jnz send_loop */
        jnz     send_loop

        /* 0x0053D6F9: mov edi, [esp + 0x18] */
        mov     edi, [esp + 0x18]

    skip_send:
        /* 0x0053D6FD: test edi, edi */
        test    edi, edi

        /* 0x0053D6FF: jz epilogue */
        jz      epilogue

        /* 0x0053D701: push edi */
        push    edi

        /* 0x0053D702: call 0x004084e0 */
        call    FUN_004084e0

        /* 0x0053D707: add esp, 0x4 */
        add     esp, 0x4

    epilogue:
        /* 0x0053D70A: pop edi */
        pop     edi

        /* 0x0053D70B: pop esi */
        pop     esi

        /* 0x0053D70C: pop ebp */
        pop     ebp

        /* 0x0053D70D: pop ebx */
        pop     ebx

        /* 0x0053D70E: add esp, 0x14 */
        add     esp, 0x14

        /* 0x0053D711: ret */
        ret
    }


}
