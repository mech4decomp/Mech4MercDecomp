/*
 * FUN_0053d160 (1145 B) — __thiscall, RET 0x8.
 * Complex network event processing with player iteration and resource management.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

/* External function declarations */
extern int __fastcall FUN_004ce190(int param1, int param2, int param3, int param4);
extern int __fastcall FUN_00629290(int param1);
extern void __fastcall FUN_00629880(void);
extern void __fastcall FUN_006214a0(void);
extern void __stdcall FUN_004084e0(int ptr);
extern int __stdcall FUN_004084d0(int size);
extern int __fastcall FUN_006212f0(void);
extern int __fastcall FUN_0053d0b0(int param1, int param2);
extern int __fastcall FUN_006216a0(int param1, void *param2);

/* Global data references */
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007db090;
extern int DAT_007db094;

__declspec(naked) void FUN_0053d160(void)
{
    __asm {
        /* 0x0053D160: sub esp, 0x24 */
        sub     esp, 0x24

        /* 0x0053D163: mov eax, [0x007dab44] */
        mov     eax, dword ptr [DAT_007dab44]

        /* 0x0053D168: mov eax, [eax] */
        mov     eax, [eax]

        /* 0x0053D16A: push ebx */
        push    ebx

        /* 0x0053D16B: push ebp */
        push    ebp

        /* 0x0053D16C: push esi */
        push    esi

        /* 0x0053D16D: xor eax, [0x007dab40] */
        xor     eax, dword ptr [DAT_007dab40]

        /* 0x0053D173: push edi */
        push    edi

        /* 0x0053D174: mov edi, ecx */
        mov     edi, ecx

        /* 0x0053D176: mov ecx, [eax + 0x20] */
        mov     ecx, [eax + 0x20]

        /* 0x0053D179: xor ecx, 0x85739531 */
        xor     ecx, 0x85739531

        /* 0x0053D17F: mov [esp + 0x14], edi */
        mov     [esp + 0x14], edi

        /* 0x0053D183: jz epilogue */
        jz      epilogue

        /* 0x0053D189: mov edx, [0x007db090] */
        mov     edx, dword ptr [DAT_007db090]

        /* 0x0053D18F: xor ecx, ecx */
        xor     ecx, ecx

        /* 0x0053D191: mov cl, [edx + 0x28] */
        mov     cl, [edx + 0x28]

        /* 0x0053D194: xor ebx, ebx */
        xor     ebx, ebx

        /* 0x0053D196: mov edx, ecx */
        mov     edx, ecx

        /* 0x0053D198: shl edx, 7 */
        shl     edx, 7

        /* 0x0053D19B: add edx, ecx */
        add     edx, ecx

        /* 0x0053D19D: shl edx, 3 */
        shl     edx, 3

        /* 0x0053D1A0: sub edx, ecx */
        sub     edx, ecx

        /* 0x0053D1A2: cmp [edi + edx*8 + 0x353e], bl */
        cmp     byte ptr [edi + edx*8 + 0x353e], bl

        /* 0x0053D1A9: jnz check_continue */
        jnz     check_continue

        /* 0x0053D1AB: mov edx, [0x007db094] */
        mov     edx, dword ptr [DAT_007db094]

        /* 0x0053D1B1: xor ecx, ecx */
        xor     ecx, ecx

        /* 0x0053D1B3: mov cl, [edx + 0x28] */
        mov     cl, [edx + 0x28]

        /* 0x0053D1B6: push 0x1 */
        push    0x1

        /* 0x0053D1B8: push ebx */
        push    ebx

        /* 0x0053D1B9: push 0x3a */
        push    0x3a

        /* 0x0053D1BB: push ecx */
        push    ecx

        /* 0x0053D1BC: mov ecx, [eax + 0x14] */
        mov     ecx, [eax + 0x14]

        /* 0x0053D1BF: xor ecx, 0x85739531 */
        xor     ecx, 0x85739531

        /* 0x0053D1C5: call 0x004ce190 */
        call    FUN_004ce190

        /* 0x0053D1CA: pop edi */
        pop     edi

        /* 0x0053D1CB: pop esi */
        pop     esi

        /* 0x0053D1CC: pop ebp */
        pop     ebp

        /* 0x0053D1CD: pop ebx */
        pop     ebx

        /* 0x0053D1CE: add esp, 0x24 */
        add     esp, 0x24

        /* 0x0053D1D1: ret 0x8 */
        ret     0x8

    check_continue:
        /* 0x0053D1D4: mov ebp, [eax + 0x20] */
        mov     ebp, [eax + 0x20]

        /* 0x0053D1D7: xor ebp, 0x85739531 */
        xor     ebp, 0x85739531

        /* 0x0053D1DD: mov esi, [ebp + 0x225c] */
        mov     esi, [ebp + 0x225c]

        /* 0x0053D1E3: mov ecx, [esi + 0x4] */
        mov     ecx, [esi + 0x4]

        /* 0x0053D1E6: sub ecx, [esi] */
        sub     ecx, [esi]

        /* 0x0053D1E8: test ecx, 0xfffffffc */
        test    ecx, 0xfffffffc

        /* 0x0053D1EE: mov [esp + 0x24], ebp */
        mov     [esp + 0x24], ebp

        /* 0x0053D1F2: jnz alloc_done */
        jnz     alloc_done

        /* 0x0053D1F8: mov edx, [eax + 0x40] */
        mov     edx, [eax + 0x40]

        /* 0x0053D1FB: xor edx, 0x85739531 */
        xor     edx, 0x85739531

        /* 0x0053D201: jz skip_free_old */
        jz      skip_free_old

        /* 0x0053D203: mov ecx, [eax + 0x40] */
        mov     ecx, [eax + 0x40]

        /* 0x0053D206: push 0x12 */
        push    0x12

        /* 0x0053D208: xor ecx, 0x85739531 */
        xor     ecx, 0x85739531

        /* 0x0053D20E: call 0x00629290 */
        call    FUN_00629290

        /* 0x0053D213: cmp eax, ebx */
        cmp     eax, ebx

        /* 0x0053D215: jz skip_free_old */
        jz      skip_free_old

        /* 0x0053D217: mov ecx, eax */
        mov     ecx, eax

        /* 0x0053D219: call 0x00629880 */
        call    FUN_00629880

    skip_free_old:
        /* 0x0053D21E: cmp esi, ebx */
        cmp     esi, ebx

        /* 0x0053D220: jz skip_free_list */
        jz      skip_free_list

        /* 0x0053D222: mov ecx, esi */
        mov     ecx, esi

        /* 0x0053D224: call 0x006214a0 */
        call    FUN_006214a0

        /* 0x0053D229: push esi */
        push    esi

        /* 0x0053D22A: call 0x004084e0 */
        call    FUN_004084e0

        /* 0x0053D22F: add esp, 0x4 */
        add     esp, 0x4

    skip_free_list:
        /* 0x0053D232: push 0x2f8 */
        push    0x2f8

        /* 0x0053D237: mov [ebp + 0x225c], ebx */
        mov     [ebp + 0x225c], ebx

        /* 0x0053D23D: call 0x004084d0 */
        call    FUN_004084d0

        /* 0x0053D242: add esp, 0x4 */
        add     esp, 0x4

        /* 0x0053D245: cmp eax, ebx */
        cmp     eax, ebx

        /* 0x0053D247: jz alloc_zero */
        jz      alloc_zero

        /* 0x0053D249: mov ecx, eax */
        mov     ecx, eax

        /* 0x0053D24B: call 0x006212f0 */
        call    FUN_006212f0

        /* 0x0053D250: jmp alloc_done2 */
        jmp     alloc_done2

    alloc_zero:
        /* 0x0053D252: xor eax, eax */
        xor     eax, eax

    alloc_done2:
        /* 0x0053D254: mov ecx, [0x007db090] */
        mov     ecx, dword ptr [DAT_007db090]

        /* 0x0053D25A: mov [ebp + 0x225c], eax */
        mov     [ebp + 0x225c], eax

        /* 0x0053D260: xor eax, eax */
        xor     eax, eax

        /* 0x0053D262: mov al, [ecx + 0x28] */
        mov     al, [ecx + 0x28]

        /* 0x0053D265: mov edx, eax */
        mov     edx, eax

        /* 0x0053D267: shl edx, 7 */
        shl     edx, 7

        /* 0x0053D26A: add edx, eax */
        add     edx, eax

        /* 0x0053D26C: shl edx, 3 */
        shl     edx, 3

        /* 0x0053D26F: sub edx, eax */
        sub     edx, eax

        /* 0x0053D271: mov [edi + edx*8 + 0x353e], bl */
        mov     byte ptr [edi + edx*8 + 0x353e], bl

        /* 0x0053D278: jmp send_notify */
        jmp     send_notify

    alloc_done:
        /* 0x0053D27D: mov esi, [esp + 0x3c] */
        mov     esi, [esp + 0x3c]

        /* 0x0053D281: mov edx, [esi] */
        mov     edx, [esi]

        /* 0x0053D283: push 0x1 */
        push    0x1

        /* 0x0053D285: lea eax, [esp + 0x14] */
        lea     eax, [esp + 0x14]

        /* 0x0053D289: push eax */
        push    eax

        /* 0x0053D28A: mov ecx, esi */
        mov     ecx, esi

        /* 0x0053D28C: mov [esp + 0x18], bl */
        mov     byte ptr [esp + 0x18], bl

        /* 0x0053D290: call [edx + 0x20] */
        call    dword ptr [edx + 0x20]

        /* 0x0053D293: mov al, [esp + 0x10] */
        mov     al, [esp + 0x10]

        /* 0x0053D297: xor edi, edi */
        xor     edi, edi

        /* 0x0053D299: cmp al, bl */
        cmp     al, bl

        /* 0x0053D29B: mov [esp + 0x3c], ebx */
        mov     [esp + 0x3c], ebx

        /* 0x0053D29F: jbe loop1_check_done */
        jbe     loop1_check_done

    loop1_start:
        /* 0x0053D2A5: mov edx, [esi] */
        mov     edx, [esi]

        /* 0x0053D2A7: push 0x1 */
        push    0x1

        /* 0x0053D2A9: lea eax, [esp + 0x20] */
        lea     eax, [esp + 0x20]

        /* 0x0053D2AD: push eax */
        push    eax

        /* 0x0053D2AE: mov ecx, esi */
        mov     ecx, esi

        /* 0x0053D2B0: mov [esp + 0x24], bl */
        mov     byte ptr [esp + 0x24], bl

        /* 0x0053D2B4: call [edx + 0x20] */
        call    dword ptr [edx + 0x20]

        /* 0x0053D2B7: mov eax, [esp + 0x1c] */
        mov     eax, [esp + 0x1c]

        /* 0x0053D2BB: mov edx, [esp + 0x14] */
        mov     edx, [esp + 0x14]

        /* 0x0053D2BF: and eax, 0xff */
        and     eax, 0xff

        /* 0x0053D2C4: mov ecx, eax */
        mov     ecx, eax

        /* 0x0053D2C6: shl ecx, 7 */
        shl     ecx, 7

        /* 0x0053D2C9: add ecx, eax */
        add     ecx, eax

        /* 0x0053D2CB: shl ecx, 3 */
        shl     ecx, 3

        /* 0x0053D2CE: sub ecx, eax */
        sub     ecx, eax

        /* 0x0053D2D0: lea eax, [edx + ecx*8] */
        lea     eax, [edx + ecx*8]

        /* 0x0053D2D3: cmp [eax + 0x3538], bl */
        cmp     byte ptr [eax + 0x3538], bl

        /* 0x0053D2D9: jz skip_activate */
        jz      skip_activate

        /* 0x0053D2DB: mov eax, [eax + 0x3584] */
        mov     eax, [eax + 0x3584]

        /* 0x0053D2E1: cmp eax, ebx */
        cmp     eax, ebx

        /* 0x0053D2E3: jz skip_activate */
        jz      skip_activate

        /* 0x0053D2E5: mov eax, [eax + 0x170] */
        mov     eax, [eax + 0x170]

        /* 0x0053D2EB: cmp eax, ebx */
        cmp     eax, ebx

        /* 0x0053D2ED: jz skip_activate */
        jz      skip_activate

        /* 0x0053D2EF: mov ecx, [eax + 0x4] */
        mov     ecx, [eax + 0x4]

        /* 0x0053D2F2: cmp dword ptr [ecx], 0x429 */
        cmp     dword ptr [ecx], 0x429

        /* 0x0053D2F8: jnz loop1_next */
        jnz     loop1_next

        /* 0x0053D2FA: add eax, 0x14 */
        add     eax, 0x14

        /* 0x0053D2FD: push eax */
        push    eax

        /* 0x0053D2FE: push esi */
        push    esi

        /* 0x0053D2FF: call 0x0053d0b0 */
        call    FUN_0053d0b0

        /* 0x0053D304: add esp, 0x8 */
        add     esp, 0x8

        /* 0x0053D307: test al, al */
        test    al, al

        /* 0x0053D309: jz loop1_next */
        jz      loop1_next

        /* 0x0053D30B: inc dword ptr [esp + 0x3c] */
        inc     dword ptr [esp + 0x3c]

        /* 0x0053D30F: jmp loop1_next */
        jmp     loop1_next

    skip_activate:
        /* 0x0053D311: mov edx, [esi] */
        mov     edx, [esi]

        /* 0x0053D313: push 0x1 */
        push    0x1

        /* 0x0053D315: lea eax, [esp + 0x24] */
        lea     eax, [esp + 0x24]

        /* 0x0053D319: push eax */
        push    eax

        /* 0x0053D31A: mov ecx, esi */
        mov     ecx, esi

        /* 0x0053D31C: mov [esp + 0x28], ebx */
        mov     [esp + 0x28], ebx

        /* 0x0053D320: call [edx + 0x20] */
        call    dword ptr [edx + 0x20]

        /* 0x0053D323: mov eax, [esp + 0x20] */
        mov     eax, [esp + 0x20]

        /* 0x0053D327: mov edx, [esi] */
        mov     edx, [esi]

        /* 0x0053D329: lea eax, [eax + eax*4] */
        lea     eax, [eax + eax*4]

        /* 0x0053D32C: push eax */
        push    eax

        /* 0x0053D32D: mov ecx, esi */
        mov     ecx, esi

        /* 0x0053D32F: call [edx + 0x18] */
        call    dword ptr [edx + 0x18]

    loop1_next:
        /* 0x0053D332: mov ecx, [esp + 0x10] */
        mov     ecx, [esp + 0x10]

        /* 0x0053D336: inc edi */
        inc     edi

        /* 0x0053D337: and ecx, 0xff */
        and     ecx, 0xff

        /* 0x0053D33D: cmp edi, ecx */
        cmp     edi, ecx

        /* 0x0053D33F: jl loop1_start */
        jl      loop1_start

        /* 0x0053D345: cmp [esp + 0x3c], ebx */
        cmp     dword ptr [esp + 0x3c], ebx

        /* 0x0053D349: jnz loop2_entry */
        jnz     loop2_entry

        /* 0x0053D34F: cmp [esp + 0x10], bl */
        cmp     byte ptr [esp + 0x10], bl

    loop1_check_done:
        /* 0x0053D353: jz loop2_entry */
        jz      loop2_entry

        /* 0x0053D359: mov edx, [0x007dab44] */
        mov     edx, dword ptr [DAT_007dab44]

        /* 0x0053D35F: mov eax, [edx] */
        mov     eax, [edx]

        /* 0x0053D361: xor eax, [0x007dab40] */
        xor     eax, dword ptr [DAT_007dab40]

        /* 0x0053D367: mov ecx, [eax + 0x40] */
        mov     ecx, [eax + 0x40]

        /* 0x0053D36A: xor ecx, 0x85739531 */
        xor     ecx, 0x85739531

        /* 0x0053D370: jz skip_free_old2 */
        jz      skip_free_old2

        /* 0x0053D372: mov ecx, [eax + 0x40] */
        mov     ecx, [eax + 0x40]

        /* 0x0053D375: push 0x12 */
        push    0x12

        /* 0x0053D377: xor ecx, 0x85739531 */
        xor     ecx, 0x85739531

        /* 0x0053D37D: call 0x00629290 */
        call    FUN_00629290

        /* 0x0053D382: cmp eax, ebx */
        cmp     eax, ebx

        /* 0x0053D384: jz skip_free_old2 */
        jz      skip_free_old2

        /* 0x0053D386: mov ecx, eax */
        mov     ecx, eax

        /* 0x0053D388: call 0x00629880 */
        call    FUN_00629880

    skip_free_old2:
        /* 0x0053D38D: mov esi, [ebp + 0x225c] */
        mov     esi, [ebp + 0x225c]

        /* 0x0053D393: cmp esi, ebx */
        cmp     esi, ebx

        /* 0x0053D395: jz skip_free_list2 */
        jz      skip_free_list2

        /* 0x0053D397: mov ecx, esi */
        mov     ecx, esi

        /* 0x0053D399: call 0x006214a0 */
        call    FUN_006214a0

        /* 0x0053D39E: push esi */
        push    esi

        /* 0x0053D39F: call 0x004084e0 */
        call    FUN_004084e0

        /* 0x0053D3A4: add esp, 0x4 */
        add     esp, 0x4

    skip_free_list2:
        /* 0x0053D3A7: push 0x2f8 */
        push    0x2f8

        /* 0x0053D3AC: mov [ebp + 0x225c], ebx */
        mov     [ebp + 0x225c], ebx

        /* 0x0053D3B2: call 0x004084d0 */
        call    FUN_004084d0

        /* 0x0053D3B7: add esp, 0x4 */
        add     esp, 0x4

        /* 0x0053D3BA: cmp eax, ebx */
        cmp     eax, ebx

        /* 0x0053D3BC: jz alloc_zero2 */
        jz      alloc_zero2

        /* 0x0053D3BE: mov ecx, eax */
        mov     ecx, eax

        /* 0x0053D3C0: call 0x006212f0 */
        call    FUN_006212f0

        /* 0x0053D3C5: jmp alloc_done3 */
        jmp     alloc_done3

    alloc_zero2:
        /* 0x0053D3C7: xor eax, eax */
        xor     eax, eax

    alloc_done3:
        /* 0x0053D3C9: mov edx, [0x007db090] */
        mov     edx, dword ptr [DAT_007db090]

        /* 0x0053D3CF: mov [ebp + 0x225c], eax */
        mov     [ebp + 0x225c], eax

        /* 0x0053D3D5: xor eax, eax */
        xor     eax, eax

        /* 0x0053D3D7: mov al, [edx + 0x28] */
        mov     al, [edx + 0x28]

        /* 0x0053D3DA: mov edx, [esp + 0x14] */
        mov     edx, [esp + 0x14]

        /* 0x0053D3DE: mov ecx, eax */
        mov     ecx, eax

        /* 0x0053D3E0: shl ecx, 7 */
        shl     ecx, 7

        /* 0x0053D3E3: add ecx, eax */
        add     ecx, eax

        /* 0x0053D3E5: shl ecx, 3 */
        shl     ecx, 3

        /* 0x0053D3E8: sub ecx, eax */
        sub     ecx, eax

        /* 0x0053D3EA: mov [edx + ecx*8 + 0x353e], bl */
        mov     byte ptr [edx + ecx*8 + 0x353e], bl

    send_notify:
        /* 0x0053D3F1: mov ecx, [0x007db094] */
        mov     ecx, dword ptr [DAT_007db094]

        /* 0x0053D3F7: mov edx, [0x007dab44] */
        mov     edx, dword ptr [DAT_007dab44]

        /* 0x0053D3FD: xor eax, eax */
        xor     eax, eax

        /* 0x0053D3FF: mov al, [ecx + 0x28] */
        mov     al, [ecx + 0x28]

        /* 0x0053D402: mov ecx, [0x007dab40] */
        mov     ecx, dword ptr [DAT_007dab40]

        /* 0x0053D408: push 0x1 */
        push    0x1

        /* 0x0053D40A: push ebx */
        push    ebx

        /* 0x0053D40B: push 0x3a */
        push    0x3a

        /* 0x0053D40D: push eax */
        push    eax

        /* 0x0053D40E: mov eax, [edx] */
        mov     eax, [edx]

        /* 0x0053D410: xor eax, ecx */
        xor     eax, ecx

        /* 0x0053D412: mov ecx, [eax + 0x14] */
        mov     ecx, [eax + 0x14]

        /* 0x0053D415: xor ecx, 0x85739531 */
        xor     ecx, 0x85739531

        /* 0x0053D41B: call 0x004ce190 */
        call    FUN_004ce190

        /* 0x0053D420: pop edi */
        pop     edi

        /* 0x0053D421: pop esi */
        pop     esi

        /* 0x0053D422: pop ebp */
        pop     ebp

        /* 0x0053D423: pop ebx */
        pop     ebx

        /* 0x0053D424: add esp, 0x24 */
        add     esp, 0x24

        /* 0x0053D427: ret 0x8 */
        ret     0x8

    loop2_entry:
        /* 0x0053D42A: mov edx, [esi] */
        mov     edx, [esi]

        /* 0x0053D42C: push 0x1 */
        push    0x1

        /* 0x0053D42E: lea eax, [esp + 0x1c] */
        lea     eax, [esp + 0x1c]

        /* 0x0053D432: push eax */
        push    eax

        /* 0x0053D433: mov ecx, esi */
        mov     ecx, esi

        /* 0x0053D435: mov [esp + 0x20], bl */
        mov     byte ptr [esp + 0x20], bl

        /* 0x0053D439: call [edx + 0x20] */
        call    dword ptr [edx + 0x20]

        /* 0x0053D43C: mov al, [esp + 0x18] */
        mov     al, [esp + 0x18]

        /* 0x0053D440: xor ebp, ebp */
        xor     ebp, ebp

        /* 0x0053D442: cmp al, bl */
        cmp     al, bl

        /* 0x0053D444: jbe loop3_start */
        jbe     loop3_start

    loop2_start:
        /* 0x0053D44A: mov edx, [esi] */
        mov     edx, [esi]

        /* 0x0053D44C: push 0x1 */
        push    0x1

        /* 0x0053D44E: lea eax, [esp + 0x24] */
        lea     eax, [esp + 0x24]

        /* 0x0053D452: push eax */
        push    eax

        /* 0x0053D453: mov ecx, esi */
        mov     ecx, esi

        /* 0x0053D455: mov [esp + 0x28], bl */
        mov     byte ptr [esp + 0x28], bl

        /* 0x0053D459: call [edx + 0x20] */
        call    dword ptr [edx + 0x20]

        /* 0x0053D45C: mov ecx, [esp + 0x20] */
        mov     ecx, [esp + 0x20]

        /* 0x0053D460: mov edx, [esp + 0x14] */
        mov     edx, [esp + 0x14]

        /* 0x0053D464: and ecx, 0xff */
        and     ecx, 0xff

        /* 0x0053D46A: imul ecx, ecx, 0x22ac */
        imul    ecx, ecx, 0x22ac

        /* 0x0053D470: mov eax, [ecx + edx + 0x205d30] */
        mov     eax, [ecx + edx + 0x205d30]

        /* 0x0053D477: cmp eax, ebx */
        cmp     eax, ebx

        /* 0x0053D479: jz loop2_skip_activate */
        jz      loop2_skip_activate

        /* 0x0053D47B: add eax, 0x14 */
        add     eax, 0x14

        /* 0x0053D47E: push eax */
        push    eax

        /* 0x0053D47F: push esi */
        push    esi

        /* 0x0053D480: call 0x0053d0b0 */
        call    FUN_0053d0b0

        /* 0x0053D485: add esp, 0x8 */
        add     esp, 0x8

        /* 0x0053D488: jmp loop2_next */
        jmp     loop2_next

    loop2_skip_activate:
        /* 0x0053D48A: mov eax, [esi] */
        mov     eax, [esi]

        /* 0x0053D48C: push 0x1 */
        push    0x1

        /* 0x0053D48E: lea ecx, [esp + 0x40] */
        lea     ecx, [esp + 0x40]

        /* 0x0053D492: push ecx */
        push    ecx

        /* 0x0053D493: mov ecx, esi */
        mov     ecx, esi

        /* 0x0053D495: mov [esp + 0x44], ebx */
        mov     [esp + 0x44], ebx

        /* 0x0053D499: call [eax + 0x20] */
        call    dword ptr [eax + 0x20]

        /* 0x0053D49C: mov eax, [esp + 0x3c] */
        mov     eax, [esp + 0x3c]

        /* 0x0053D4A0: xor edi, edi */
        xor     edi, edi

        /* 0x0053D4A2: cmp eax, ebx */
        cmp     eax, ebx

        /* 0x0053D4A4: jle loop2_next */
        jle     loop2_next

    loop2b_start:
        /* 0x0053D4A6: mov edx, [esi] */
        mov     edx, [esi]

        /* 0x0053D4A8: push 0x1 */
        push    0x1

        /* 0x0053D4AA: lea eax, [esp + 0x20] */
        lea     eax, [esp + 0x20]

        /* 0x0053D4AE: push eax */
        push    eax

        /* 0x0053D4AF: mov ecx, esi */
        mov     ecx, esi

        /* 0x0053D4B1: mov [esp + 0x24], ebx */
        mov     [esp + 0x24], ebx

        /* 0x0053D4B5: call [edx + 0x20] */
        call    dword ptr [edx + 0x20]

        /* 0x0053D4B8: mov edx, [esi] */
        mov     edx, [esi]

        /* 0x0053D4BA: push 0x4 */
        push    0x4

        /* 0x0053D4BC: lea eax, [esp + 0x20] */
        lea     eax, [esp + 0x20]

        /* 0x0053D4C0: push eax */
        push    eax

        /* 0x0053D4C1: mov ecx, esi */
        mov     ecx, esi

        /* 0x0053D4C3: call [edx + 0x20] */
        call    dword ptr [edx + 0x20]

        /* 0x0053D4C6: mov eax, [esp + 0x3c] */
        mov     eax, [esp + 0x3c]

        /* 0x0053D4CA: inc edi */
        inc     edi

        /* 0x0053D4CB: cmp edi, eax */
        cmp     edi, eax

        /* 0x0053D4CD: jl loop2b_start */
        jl      loop2b_start

    loop2_next:
        /* 0x0053D4CF: mov ecx, [esp + 0x18] */
        mov     ecx, [esp + 0x18]

        /* 0x0053D4D3: inc ebp */
        inc     ebp

        /* 0x0053D4D4: and ecx, 0xff */
        and     ecx, 0xff

        /* 0x0053D4DA: cmp ebp, ecx */
        cmp     ebp, ecx

        /* 0x0053D4DC: jl loop2_start */
        jl      loop2_start

    loop3_start:
        /* 0x0053D4E2: xor ebp, ebp */
        xor     ebp, ebp

        /* 0x0053D4E4: mov [esp + 0x28], ebx */
        mov     [esp + 0x28], ebx

        /* 0x0053D4E8: mov [esp + 0x2c], ebx */
        mov     [esp + 0x2c], ebx

        /* 0x0053D4EC: mov [esp + 0x30], ebx */
        mov     [esp + 0x30], ebx

        /* 0x0053D4F0: mov [esp + 0x14], ebp */
        mov     [esp + 0x14], ebp

    loop3_inner:
        /* 0x0053D4F4: mov eax, [esp + 0x24] */
        mov     eax, [esp + 0x24]

        /* 0x0053D4F8: mov ecx, [eax + 0x225c] */
        mov     ecx, [eax + 0x225c]

        /* 0x0053D4FE: lea edx, [esp + 0x28] */
        lea     edx, [esp + 0x28]

        /* 0x0053D502: push edx */
        push    edx

        /* 0x0053D503: push ebp */
        push    ebp

        /* 0x0053D504: call 0x006216a0 */
        call    FUN_006216a0

        /* 0x0053D509: mov edx, [esi] */
        mov     edx, [esi]

        /* 0x0053D50B: push 0x1 */
        push    0x1

        /* 0x0053D50D: lea eax, [esp + 0x40] */
        lea     eax, [esp + 0x40]

        /* 0x0053D511: push eax */
        push    eax

        /* 0x0053D512: mov ecx, esi */
        mov     ecx, esi

        /* 0x0053D514: mov [esp + 0x44], ebx */
        mov     [esp + 0x44], ebx

        /* 0x0053D518: call [edx + 0x20] */
        call    dword ptr [edx + 0x20]

        /* 0x0053D51B: mov eax, [esp + 0x3c] */
        mov     eax, [esp + 0x3c]

        /* 0x0053D51F: xor edi, edi */
        xor     edi, edi

        /* 0x0053D521: cmp eax, ebx */
        cmp     eax, ebx

        /* 0x0053D523: jle 0x0053d5d3 (near, out of short range) */
        jle     jle_target

    loop3b_start:
        /* 0x0053D529: mov edx, [esi] */
        mov     edx, [esi]

        /* 0x0053D52B: push 0x1 */
        push    0x1

        /* 0x0053D52D: lea eax, [esp + 0x24] */
        lea     eax, [esp + 0x24]

        /* 0x0053D531: push eax */
        push    eax

        /* 0x0053D532: mov ecx, esi */
        mov     ecx, esi

        /* 0x0053D534: mov [esp + 0x28], ebx */
        mov     [esp + 0x28], ebx

        /* 0x0053D538: call [edx + 0x20] */
        call    dword ptr [edx + 0x20]

        /* 0x0053D53B: mov edx, [esi] */
        mov     edx, [esi]

        /* 0x0053D53D: push 0x4 */
        push    0x4

        /* 0x0053D53F: lea eax, [esp + 0x20] */
        lea     eax, [esp + 0x20]

        /* 0x0053D543: push eax */
        push    eax

        /* 0x0053D544: mov ecx, esi */
        mov     ecx, esi

        /* 0x0053D546: mov [esp + 0x24], ebx */
        mov     [esp + 0x24], ebx

        /* 0x0053D54A: call [edx + 0x20] */
        call    dword ptr [edx + 0x20]

        /* 0x0053D54D: mov eax, [esp + 0x28] */
        mov     eax, [esp + 0x28]

        /* 0x0053D551: mov ecx, [esp + 0x2c] */
        mov     ecx, [esp + 0x2c]

        /* 0x0053D555: cmp eax, ecx */
        cmp     eax, ecx

        /* 0x0053D557: jz loop3b_next */
        jz      loop3b_next

    loop3b_find:
        /* 0x0053D559: mov edx, [esp + 0x20] */
        mov     edx, [esp + 0x20]

    loop3b_find_inner:
        /* 0x0053D55D: mov ebp, [eax] */
        mov     ebp, [eax]

        /* 0x0053D55F: cmp [ebp + 0x4], edx */
        cmp     [ebp + 0x4], edx

        /* 0x0053D562: jz loop3b_found */
        jz      loop3b_found

        /* 0x0053D564: add eax, 0x4 */
        add     eax, 0x4

        /* 0x0053D567: cmp eax, ecx */
        cmp     eax, ecx

        /* 0x0053D569: jnz loop3b_find_inner */
        jnz     loop3b_find_inner

        /* 0x0053D56B: jmp loop3b_next */
        jmp     loop3b_next

    loop3b_found:
        /* 0x0053D56D: mov ecx, [eax] */
        mov     ecx, [eax]

        /* 0x0053D56F: mov edx, [esp + 0x1c] */
        mov     edx, [esp + 0x1c]

        /* 0x0053D573: mov [ecx], edx */
        mov     [ecx], edx

        /* 0x0053D575: mov ecx, [esp + 0x2c] */
        mov     ecx, [esp + 0x2c]

    loop3b_next:
        /* 0x0053D579: mov eax, [esp + 0x3c] */
        mov     eax, [esp + 0x3c]

        /* 0x0053D57D: inc edi */
        inc     edi

        /* 0x0053D57E: cmp edi, eax */
        cmp     edi, eax

        /* 0x0053D580: jl loop3b_start */
        jl      loop3b_start

    loop3_check:
        /* 0x0053D582: mov ebp, [esp + 0x14] */
        mov     ebp, [esp + 0x14]

    loop3_check_cont:
        /* 0x0053D586: mov edx, [esp + 0x28] */
        mov     edx, [esp + 0x28]

        /* 0x0053D58A: mov eax, ecx */
        mov     eax, ecx

        /* 0x0053D58C: sub ecx, eax */
        sub     ecx, eax

        /* 0x0053D58E: sar ecx, 2 */
        sar     ecx, 2

        /* 0x0053D591: cmp ecx, ebx */
        cmp     ecx, ebx

        /* 0x0053D593: jle loop3_copy_done */
        jle     loop3_copy_done

    loop3_copy:
        /* 0x0053D595: mov edi, [eax] */
        mov     edi, [eax]

        /* 0x0053D597: mov [edx], edi */
        mov     [edx], edi

        /* 0x0053D599: add eax, 0x4 */
        add     eax, 0x4

        /* 0x0053D59C: add edx, 0x4 */
        add     edx, 0x4

        /* 0x0053D59F: dec ecx */
        dec     ecx

        /* 0x0053D5A0: jnz loop3_copy */
        jnz     loop3_copy

    loop3_copy_done:
        /* 0x0053D5A2: inc ebp */
        inc     ebp

        /* 0x0053D5A3: cmp ebp, 0x8 */
        cmp     ebp, 0x8

        /* 0x0053D5A6: mov [esp + 0x20], edx */
        mov     [esp + 0x20], edx

        /* 0x0053D5AA: mov [esp + 0x2c], edx */
        mov     [esp + 0x2c], edx

        /* 0x0053D5AE: mov [esp + 0x14], ebp */
        mov     [esp + 0x14], ebp

        /* 0x0053D5B2: jl loop3_inner */
        jl      loop3_inner

        /* 0x0053D5B8: mov eax, [esp + 0x28] */
        mov     eax, [esp + 0x28]

        /* 0x0053D5BC: cmp eax, ebx */
        cmp     eax, ebx

        /* 0x0053D5BE: jz epilogue */
        jz      epilogue

        /* 0x0053D5C0: push eax */
        push    eax

        /* 0x0053D5C1: call 0x004084e0 */
        call    FUN_004084e0

        /* 0x0053D5C6: add esp, 0x4 */
        add     esp, 0x4

    epilogue:
        /* 0x0053D5C9: pop edi */
        pop     edi

        /* 0x0053D5CA: pop esi */
        pop     esi

        /* 0x0053D5CB: pop ebp */
        pop     ebp

        /* 0x0053D5CC: pop ebx */
        pop     ebx

        /* 0x0053D5CD: add esp, 0x24 */
        add     esp, 0x24

        /* 0x0053D5D0: ret 0x8 */
        ret     0x8

    jle_target:
        /* 0x0053D5D3: mov ecx, [esp + 0x2c] */
        mov     ecx, [esp + 0x2c]

        /* 0x0053D5D7: jmp 0x0053d586 */
        jmp     loop3_check_cont
    }
}
