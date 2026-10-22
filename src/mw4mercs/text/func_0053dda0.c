/*
 * FUN_0053dda0 (361 B) — __thiscall, RET 0x8.
 * Player join/initialization handler with resource allocation.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

/* External function declarations */
extern int __fastcall FUN_00629290(int param1);
extern void __fastcall FUN_00629880(void);
extern void __fastcall FUN_006214a0(void);
extern void __stdcall FUN_004084e0(int ptr);
extern int __stdcall FUN_004084d0(int size);
extern int __fastcall FUN_006212f0(void);
extern int __fastcall FUN_006230f0(int param1, int param2, int param3, int param4);
extern void __fastcall FUN_00624530(void *param1);

/* Global data references */
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007db090;

__declspec(naked) void FUN_0053dda0(void)
{
    
__asm {
/* 0x0053DDA0: mov eax, [0x007dab44] */
        mov     eax, dword ptr [DAT_007dab44]

        /* 0x0053DDA5: mov eax, [eax] */
        mov     eax, [eax]

        /* 0x0053DDA7: sub esp, 0x28 */
        sub     esp, 0x28

        /* 0x0053DDAA: push ebx */
        push    ebx

        /* 0x0053DDAB: push ebp */
        push    ebp

        /* 0x0053DDAC: push esi */
        push    esi

        /* 0x0053DDAD: xor eax, [0x007dab40] */
        xor     eax, dword ptr [DAT_007dab40]

        /* 0x0053DDB3: mov ebp, ecx */
        mov     ebp, ecx

        /* 0x0053DDB5: mov ecx, [eax + 0x20] */
        mov     ecx, [eax + 0x20]

        /* 0x0053DDB8: xor ecx, 0x85739531 */
        xor     ecx, 0x85739531

        /* 0x0053DDBE: push edi */
        push    edi

        /* 0x0053DDBF: jz epilogue */
        jz      epilogue

        /* 0x0053DDC5: mov esi, [eax + 0x20] */
        mov     esi, [eax + 0x20]

        /* 0x0053DDC8: mov edx, [eax + 0x40] */
        mov     edx, [eax + 0x40]

        /* 0x0053DDCB: xor esi, 0x85739531 */
        xor     esi, 0x85739531

        /* 0x0053DDD1: xor edx, 0x85739531 */
        xor     edx, 0x85739531

        /* 0x0053DDD7: mov ebx, 0x0 */
        mov     ebx, 0x0

        /* 0x0053DDDC: jz skip_free_old */
        jz      skip_free_old

        /* 0x0053DDDE: mov ecx, [eax + 0x40] */
        mov     ecx, [eax + 0x40]

        /* 0x0053DDE1: push 0x12 */
        push    0x12

        /* 0x0053DDE3: xor ecx, 0x85739531 */
        xor     ecx, 0x85739531

        /* 0x0053DDE9: call 0x00629290 */
        call    FUN_00629290

        /* 0x0053DDEE: cmp eax, ebx */
        cmp     eax, ebx

        /* 0x0053DDF0: jz skip_free_old */
        jz      skip_free_old

        /* 0x0053DDF2: mov ecx, eax */
        mov     ecx, eax

        /* 0x0053DDF4: call 0x00629880 */
        call    FUN_00629880

    skip_free_old:
        /* 0x0053DDF9: mov edi, [esi + 0x225c] */
        mov     edi, [esi + 0x225c]

        /* 0x0053DDFF: cmp edi, ebx */
        cmp     edi, ebx

        /* 0x0053DE01: jz skip_free_list */
        jz      skip_free_list

        /* 0x0053DE03: mov ecx, edi */
        mov     ecx, edi

        /* 0x0053DE05: call 0x006214a0 */
        call    FUN_006214a0

        /* 0x0053DE0A: push edi */
        push    edi

        /* 0x0053DE0B: call 0x004084e0 */
        call    FUN_004084e0

        /* 0x0053DE10: add esp, 0x4 */
        add     esp, 0x4

    skip_free_list:
        /* 0x0053DE13: push 0x2f8 */
        push    0x2f8

        /* 0x0053DE18: mov [esi + 0x225c], ebx */
        mov     [esi + 0x225c], ebx

        /* 0x0053DE1E: call 0x004084d0 */
        call    FUN_004084d0

        /* 0x0053DE23: add esp, 0x4 */
        add     esp, 0x4

        /* 0x0053DE26: cmp eax, ebx */
        cmp     eax, ebx

        /* 0x0053DE28: jz alloc_zero */
        jz      alloc_zero

        /* 0x0053DE2A: mov ecx, eax */
        mov     ecx, eax

        /* 0x0053DE2C: call 0x006212f0 */
        call    FUN_006212f0

        /* 0x0053DE31: mov edi, eax */
        mov     edi, eax

        /* 0x0053DE33: jmp alloc_done */
        jmp     alloc_done

    alloc_zero:
        /* 0x0053DE35: xor edi, edi */
        xor     edi, edi

    alloc_done:
        /* 0x0053DE37: mov ecx, [0x007db090] */
        mov     ecx, dword ptr [DAT_007db090]

        /* 0x0053DE3D: xor eax, eax */
        xor     eax, eax

        /* 0x0053DE3F: mov al, [ecx + 0x28] */
        mov     al, [ecx + 0x28]

        /* 0x0053DE42: mov [esi + 0x225c], edi */
        mov     [esi + 0x225c], edi

        /* 0x0053DE48: mov esi, [esp + 0x40] */
        mov     esi, [esp + 0x40]

        /* 0x0053DE4C: mov ecx, esi */
        mov     ecx, esi

        /* 0x0053DE4E: mov edx, eax */
        mov     edx, eax

        /* 0x0053DE50: shl edx, 7 */
        shl     edx, 7

        /* 0x0053DE53: add edx, eax */
        add     edx, eax

        /* 0x0053DE55: shl edx, 3 */
        shl     edx, 3

        /* 0x0053DE58: sub edx, eax */
        sub     edx, eax

        /* 0x0053DE5A: mov eax, [esi] */
        mov     eax, [esi]

        /* 0x0053DE5C: mov byte ptr [ebp + edx*8 + 0x353e], 0x1 */
        mov     byte ptr [ebp + edx*8 + 0x353e], 0x1

        /* 0x0053DE64: call [eax + 0x8] */
        call    dword ptr [eax + 0x8]

        /* 0x0053DE67: test eax, eax */
        test    eax, eax

        /* 0x0053DE69: jz epilogue */
        jz      epilogue

    init_loop:
        /* 0x0053DE6F: mov edx, [esi] */
        mov     edx, [esi]

        /* 0x0053DE71: push 0x1 */
        push    0x1

        /* 0x0053DE73: lea eax, [esp + 0x1c] */
        lea     eax, [esp + 0x1c]

        /* 0x0053DE77: push eax */
        push    eax

        /* 0x0053DE78: mov ecx, esi */
        mov     ecx, esi

        /* 0x0053DE7A: mov [esp + 0x20], ebx */
        mov     [esp + 0x20], ebx

        /* 0x0053DE7E: mov [esp + 0x1c], ebx */
        mov     [esp + 0x1c], ebx

        /* 0x0053DE82: mov [esp + 0x18], ebx */
        mov     [esp + 0x18], ebx

        /* 0x0053DE86: mov [esp + 0x48], bl */
        mov     byte ptr [esp + 0x48], bl

        /* 0x0053DE8A: call [edx + 0x20] */
        call    dword ptr [edx + 0x20]

        /* 0x0053DE8D: mov edx, [esi] */
        mov     edx, [esi]

        /* 0x0053DE8F: push 0x4 */
        push    0x4

        /* 0x0053DE91: lea eax, [esp + 0x18] */
        lea     eax, [esp + 0x18]

        /* 0x0053DE95: push eax */
        push    eax

        /* 0x0053DE96: mov ecx, esi */
        mov     ecx, esi

        /* 0x0053DE98: call [edx + 0x20] */
        call    dword ptr [edx + 0x20]

        /* 0x0053DE9B: mov edx, [esi] */
        mov     edx, [esi]

        /* 0x0053DE9D: push 0x4 */
        push    0x4

        /* 0x0053DE9F: lea eax, [esp + 0x14] */
        lea     eax, [esp + 0x14]

        /* 0x0053DEA3: push eax */
        push    eax

        /* 0x0053DEA4: mov ecx, esi */
        mov     ecx, esi

        /* 0x0053DEA6: call [edx + 0x20] */
        call    dword ptr [edx + 0x20]

        /* 0x0053DEA9: mov edx, [esi] */
        mov     edx, [esi]

        /* 0x0053DEAB: push 0x1 */
        push    0x1

        /* 0x0053DEAD: lea eax, [esp + 0x44] */
        lea     eax, [esp + 0x44]

        /* 0x0053DEB1: push eax */
        push    eax

        /* 0x0053DEB2: mov ecx, esi */
        mov     ecx, esi

        /* 0x0053DEB4: call [edx + 0x20] */
        call    dword ptr [edx + 0x20]

        /* 0x0053DEB7: mov edx, [esi] */
        mov     edx, [esi]

        /* 0x0053DEB9: push 0x19 */
        push    0x19

        /* 0x0053DEBB: lea eax, [esp + 0x20] */
        lea     eax, [esp + 0x20]

        /* 0x0053DEBF: push eax */
        push    eax

        /* 0x0053DEC0: mov ecx, esi */
        mov     ecx, esi

        /* 0x0053DEC2: call [edx + 0x20] */
        call    dword ptr [edx + 0x20]

        /* 0x0053DEC5: mov ecx, [esp + 0x40] */
        mov     ecx, [esp + 0x40]

        /* 0x0053DEC9: mov edx, [esp + 0x10] */
        mov     edx, [esp + 0x10]

        /* 0x0053DECD: mov eax, [esp + 0x14] */
        mov     eax, [esp + 0x14]

        /* 0x0053DED1: push ecx */
        push    ecx

        /* 0x0053DED2: mov ecx, [esp + 0x1c] */
        mov     ecx, [esp + 0x1c]

        /* 0x0053DED6: push edx */
        push    edx

        /* 0x0053DED7: push eax */
        push    eax

        /* 0x0053DED8: push ecx */
        push    ecx

        /* 0x0053DED9: mov ecx, edi */
        mov     ecx, edi

        /* 0x0053DEDB: mov [esp + 0x44], bl */
        mov     byte ptr [esp + 0x44], bl

        /* 0x0053DEDF: call 0x006230f0 */
        call    FUN_006230f0

        /* 0x0053DEE4: lea edx, [esp + 0x1c] */
        lea     edx, [esp + 0x1c]

        /* 0x0053DEE8: push edx */
        push    edx

        /* 0x0053DEE9: mov ecx, edi */
        mov     ecx, edi

        /* 0x0053DEEB: call 0x00624530 */
        call    FUN_00624530

        /* 0x0053DEF0: mov eax, [esi] */
        mov     eax, [esi]

        /* 0x0053DEF2: mov ecx, esi */
        mov     ecx, esi

        /* 0x0053DEF4: call [eax + 0x8] */
        call    dword ptr [eax + 0x8]

        /* 0x0053DEF7: test eax, eax */
        test    eax, eax

        /* 0x0053DEF9: jnz init_loop */
        jnz     init_loop

    epilogue:
        /* 0x0053DEFF: pop edi */
        pop     edi

        /* 0x0053DF00: pop esi */
        pop     esi

        /* 0x0053DF01: pop ebp */
        pop     ebp

        /* 0x0053DF02: pop ebx */
        pop     ebx

        /* 0x0053DF03: add esp, 0x28 */
        add     esp, 0x28

        /* 0x0053DF06: ret 0x8 */
        ret     0x8
    }


}
