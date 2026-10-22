/*
 * FUN_0053d720 (1028 B) — __fastcall.
 * Complex network state synchronization function.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

/* External function declarations */
extern void __fastcall FUN_0041ee70(int param1);
extern void __fastcall FUN_0041f030(void *param1, int param2);
extern void __fastcall FUN_0053d5e0(void *param1, int param2);
extern int __fastcall FUN_006216a0(int param1, void *param2);
extern int __fastcall FUN_00624510(void);
extern void __fastcall FUN_00547c20(void *param1, void *param2);
extern void __fastcall FUN_00547fd0(void *param1, void *param2, int param3);
extern int __fastcall FUN_00624420(void);
extern int __fastcall FUN_00548170(int param1, int param2, int param3, int param4, int param5);
extern void __fastcall FUN_00547c50(int param1, int param2);
extern void __fastcall FUN_0053db30(void);
extern void __fastcall FUN_0053db90(int param1);
extern int __fastcall FUN_004ce190(int param1, int param2, void *param3, int param4);
extern void __fastcall FUN_0041ef60(void *param1);
extern void __stdcall FUN_004084e0(int ptr);

/* Global data references */
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007db094;

__declspec(naked) void FUN_0053d720(void)
{
    
__asm {
/* 0x0053D720: sub esp, 0x58 */
        sub     esp, 0x58

        /* 0x0053D723: push ebx */
        push    ebx

        /* 0x0053D724: push ebp */
        push    ebp

        /* 0x0053D725: push esi */
        push    esi

        /* 0x0053D726: push edi */
        push    edi

        /* 0x0053D727: mov ebp, ecx */
        mov     ebp, ecx

        /* 0x0053D729: push 0x0 */
        push    0x0

        /* 0x0053D72B: lea ecx, [esp + 0x44] */
        lea     ecx, [esp + 0x44]

        /* 0x0053D72F: mov [esp + 0x1c], ebp */
        mov     [esp + 0x1c], ebp

        /* 0x0053D733: call 0x0041ee70 */
        call    FUN_0041ee70

        /* 0x0053D738: mov eax, [0x007dab44] */
        mov     eax, dword ptr [DAT_007dab44]

        /* 0x0053D73D: mov ecx, [eax] */
        mov     ecx, [eax]

        /* 0x0053D73F: xor ecx, [0x007dab40] */
        xor     ecx, dword ptr [DAT_007dab40]

        /* 0x0053D745: mov eax, [ecx + 0x20] */
        mov     eax, [ecx + 0x20]

        /* 0x0053D748: xor eax, 0x85739531 */
        xor     eax, 0x85739531

        /* 0x0053D74D: lea edi, [ebp + 0x3584] */
        lea     edi, [ebp + 0x3584]

        /* 0x0053D753: mov [esp + 0x14], eax */
        mov     [esp + 0x14], eax

        /* 0x0053D757: mov byte ptr [esp + 0x10], 0x0 */
        mov     byte ptr [esp + 0x10], 0x0

        /* 0x0053D75C: mov eax, edi */
        mov     eax, edi

        /* 0x0053D75E: mov edx, 0xff */
        mov     edx, 0xff

    count_active_loop:
        /* 0x0053D763: mov ecx, [eax] */
        mov     ecx, [eax]

        /* 0x0053D765: test ecx, ecx */
        test    ecx, ecx

        /* 0x0053D767: jz count_active_next */
        jz      count_active_next

        /* 0x0053D769: mov ecx, [ecx + 0x170] */
        mov     ecx, [ecx + 0x170]

        /* 0x0053D76F: test ecx, ecx */
        test    ecx, ecx

        /* 0x0053D771: jz count_active_next */
        jz      count_active_next

        /* 0x0053D773: mov bl, [eax + -0x48] */
        mov     bl, [eax + -0x48]

        /* 0x0053D776: test bl, bl */
        test    bl, bl

        /* 0x0053D778: jz count_active_next */
        jz      count_active_next

        /* 0x0053D77A: mov ecx, [ecx + 0x4] */
        mov     ecx, [ecx + 0x4]

        /* 0x0053D77D: cmp dword ptr [ecx], 0x429 */
        cmp     dword ptr [ecx], 0x429

        /* 0x0053D783: jnz count_active_next */
        jnz     count_active_next

        /* 0x0053D785: inc byte ptr [esp + 0x10] */
        inc     byte ptr [esp + 0x10]

    count_active_next:
        /* 0x0053D789: add eax, 0x2038 */
        add     eax, 0x2038

        /* 0x0053D78E: dec edx */
        dec     edx

        /* 0x0053D78F: jnz count_active_loop */
        jnz     count_active_loop

        /* 0x0053D791: push 0x1 */
        push    0x1

        /* 0x0053D793: lea edx, [esp + 0x14] */
        lea     edx, [esp + 0x14]

        /* 0x0053D797: push edx */
        push    edx

        /* 0x0053D798: lea ecx, [esp + 0x48] */
        lea     ecx, [esp + 0x48]

        /* 0x0053D79C: call 0x0041f030 */
        call    FUN_0041f030

        /* 0x0053D7A1: xor ebx, ebx */
        xor     ebx, ebx

    player_loop_start:
        /* 0x0053D7A3: mov esi, [edi] */
        mov     esi, [edi]

        /* 0x0053D7A5: test esi, esi */
        test    esi, esi

        /* 0x0053D7A7: jz player_loop_next */
        jz      player_loop_next

        /* 0x0053D7A9: mov eax, [esi + 0x170] */
        mov     eax, [esi + 0x170]

        /* 0x0053D7AF: test eax, eax */
        test    eax, eax

        /* 0x0053D7B1: jz player_loop_next */
        jz      player_loop_next

        /* 0x0053D7B3: mov cl, [edi + -0x48] */
        mov     cl, [edi + -0x48]

        /* 0x0053D7B6: test cl, cl */
        test    cl, cl

        /* 0x0053D7B8: jz player_loop_next */
        jz      player_loop_next

        /* 0x0053D7BA: mov eax, [eax + 0x4] */
        mov     eax, [eax + 0x4]

        /* 0x0053D7BD: cmp dword ptr [eax], 0x429 */
        cmp     dword ptr [eax], 0x429

        /* 0x0053D7C3: jnz player_loop_next */
        jnz     player_loop_next

        /* 0x0053D7C5: push 0x1 */
        push    0x1

        /* 0x0053D7C7: lea ecx, [esp + 0x16] */
        lea     ecx, [esp + 0x16]

        /* 0x0053D7CB: push ecx */
        push    ecx

        /* 0x0053D7CC: lea ecx, [esp + 0x48] */
        lea     ecx, [esp + 0x48]

        /* 0x0053D7D0: mov [esp + 0x1a], bl */
        mov     byte ptr [esp + 0x1a], bl

        /* 0x0053D7D4: call 0x0041f030 */
        call    FUN_0041f030

        /* 0x0053D7D9: mov edx, [esi + 0x170] */
        mov     edx, [esi + 0x170]

        /* 0x0053D7DF: add edx, 0x14 */
        add     edx, 0x14

        /* 0x0053D7E2: push edx */
        push    edx

        /* 0x0053D7E3: lea eax, [esp + 0x44] */
        lea     eax, [esp + 0x44]

        /* 0x0053D7E7: push eax */
        push    eax

        /* 0x0053D7E8: call 0x0053d5e0 */
        call    FUN_0053d5e0

        /* 0x0053D7ED: add esp, 0x8 */
        add     esp, 0x8

    player_loop_next:
        /* 0x0053D7F0: inc ebx */
        inc     ebx

        /* 0x0053D7F1: add edi, 0x2038 */
        add     edi, 0x2038

        /* 0x0053D7F7: cmp ebx, 0xff */
        cmp     ebx, 0xff

        /* 0x0053D7FD: jl player_loop_start */
        jl      player_loop_start

        /* 0x0053D7FF: xor dl, dl */
        xor     dl, dl

        /* 0x0053D801: lea edi, [ebp + 0x205d30] */
        lea     edi, [ebp + 0x205d30]

        /* 0x0053D807: mov [esp + 0x11], dl */
        mov     byte ptr [esp + 0x11], dl

        /* 0x0053D80B: mov eax, edi */
        mov     eax, edi

        /* 0x0053D80D: mov ecx, 0x18 */
        mov     ecx, 0x18

    count_weapons_loop:
        /* 0x0053D812: mov esi, [eax] */
        mov     esi, [eax]

        /* 0x0053D814: xor ebp, ebp */
        xor     ebp, ebp

        /* 0x0053D816: cmp esi, ebp */
        cmp     esi, ebp

        /* 0x0053D818: jz count_weapons_next */
        jz      count_weapons_next

        /* 0x0053D81A: inc dl */
        inc     dl

    count_weapons_next:
        /* 0x0053D81C: add eax, 0x22ac */
        add     eax, 0x22ac

        /* 0x0053D821: dec ecx */
        dec     ecx

        /* 0x0053D822: jnz count_weapons_loop */
        jnz     count_weapons_loop

        /* 0x0053D824: push 0x1 */
        push    0x1

        /* 0x0053D826: lea ecx, [esp + 0x15] */
        lea     ecx, [esp + 0x15]

        /* 0x0053D82A: push ecx */
        push    ecx

        /* 0x0053D82B: lea ecx, [esp + 0x48] */
        lea     ecx, [esp + 0x48]

        /* 0x0053D82F: mov [esp + 0x19], dl */
        mov     byte ptr [esp + 0x19], dl

        /* 0x0053D833: call 0x0041f030 */
        call    FUN_0041f030

        /* 0x0053D838: xor ebx, ebx */
        xor     ebx, ebx

    weapons_loop_start:
        /* 0x0053D83A: mov esi, [edi] */
        mov     esi, [edi]

        /* 0x0053D83C: cmp esi, ebp */
        cmp     esi, ebp

        /* 0x0053D83E: jz weapons_loop_next */
        jz      weapons_loop_next

        /* 0x0053D840: push 0x1 */
        push    0x1

        /* 0x0053D842: lea edx, [esp + 0x16] */
        lea     edx, [esp + 0x16]

        /* 0x0053D846: push edx */
        push    edx

        /* 0x0053D847: lea ecx, [esp + 0x48] */
        lea     ecx, [esp + 0x48]

        /* 0x0053D84B: mov [esp + 0x1a], bl */
        mov     byte ptr [esp + 0x1a], bl

        /* 0x0053D84F: call 0x0041f030 */
        call    FUN_0041f030

        /* 0x0053D854: add esi, 0x14 */
        add     esi, 0x14

        /* 0x0053D857: lea eax, [esp + 0x40] */
        lea     eax, [esp + 0x40]

        /* 0x0053D85B: push esi */
        push    esi

        /* 0x0053D85C: push eax */
        push    eax

        /* 0x0053D85D: call 0x0053d5e0 */
        call    FUN_0053d5e0

        /* 0x0053D862: add esp, 0x8 */
        add     esp, 0x8

    weapons_loop_next:
        /* 0x0053D865: inc ebx */
        inc     ebx

        /* 0x0053D866: add edi, 0x22ac */
        add     edi, 0x22ac

        /* 0x0053D86C: cmp ebx, 0x18 */
        cmp     ebx, 0x18

        /* 0x0053D86F: jl weapons_loop_start */
        jl      weapons_loop_start

        /* 0x0053D871: lea ecx, [esp + 0x1c] */
        lea     ecx, [esp + 0x1c]

        /* 0x0053D875: push ecx */
        push    ecx

        /* 0x0053D876: lea edx, [esp + 0x16] */
        lea     edx, [esp + 0x16]

        /* 0x0053D87A: push edx */
        push    edx

        /* 0x0053D87B: lea ecx, [esp + 0x44] */
        lea     ecx, [esp + 0x44]

        /* 0x0053D87F: mov [esp + 0x3c], ebp */
        mov     [esp + 0x3c], ebp

        /* 0x0053D883: mov [esp + 0x40], ebp */
        mov     [esp + 0x40], ebp

        /* 0x0053D887: mov [esp + 0x24], ebp */
        mov     [esp + 0x24], ebp

        /* 0x0053D88B: call 0x00547c20 */
        call    FUN_00547c20

        /* 0x0053D890: mov ebp, [esp + 0x24] */
        mov     ebp, [esp + 0x24]

        /* 0x0053D894: xor ebx, ebx */
        xor     ebx, ebx

    big_loop_start:
        /* 0x0053D896: mov ecx, [esp + 0x14] */
        mov     ecx, [esp + 0x14]

        /* 0x0053D89A: mov ecx, [ecx + 0x225c] */
        mov     ecx, [ecx + 0x225c]

        /* 0x0053D8A0: lea eax, [esp + 0x34] */
        lea     eax, [esp + 0x34]

        /* 0x0053D8A4: push eax */
        push    eax

        /* 0x0053D8A5: push ebx */
        push    ebx

        /* 0x0053D8A6: call 0x006216a0 */
        call    FUN_006216a0

        /* 0x0053D8AB: lea edx, [esp + 0x1c] */
        lea     edx, [esp + 0x1c]

        /* 0x0053D8AF: xor edi, edi */
        xor     edi, edi

        /* 0x0053D8B1: push edx */
        push    edx

        /* 0x0053D8B2: lea eax, [esp + 0x17] */
        lea     eax, [esp + 0x17]

        /* 0x0053D8B6: push eax */
        push    eax

        /* 0x0053D8B7: lea ecx, [esp + 0x38] */
        lea     ecx, [esp + 0x38]

        /* 0x0053D8BB: mov [esp + 0x30], edi */
        mov     [esp + 0x30], edi

        /* 0x0053D8BF: mov [esp + 0x34], edi */
        mov     [esp + 0x34], edi

        /* 0x0053D8C3: mov [esp + 0x24], edi */
        mov     [esp + 0x24], edi

        /* 0x0053D8C7: call 0x00547c20 */
        call    FUN_00547c20

        /* 0x0053D8CC: mov eax, [esp + 0x38] */
        mov     eax, [esp + 0x38]

        /* 0x0053D8D0: mov esi, [esp + 0x34] */
        mov     esi, [esp + 0x34]

        /* 0x0053D8D4: cmp esi, eax */
        cmp     esi, eax

        /* 0x0053D8D6: mov eax, [esp + 0x2c] */
        mov     eax, [esp + 0x2c]

        /* 0x0053D8DA: jz filter_done */
        jz      filter_done

    filter_loop:
        /* 0x0053D8DC: mov edi, [esi] */
        mov     edi, [esi]

        /* 0x0053D8DE: cmp byte ptr [edi + 0x1c], 0x1 */
        cmp     byte ptr [edi + 0x1c], 0x1

        /* 0x0053D8E2: jnz filter_next */
        jnz     filter_next

        /* 0x0053D8E4: mov ecx, edi */
        mov     ecx, edi

        /* 0x0053D8E6: call 0x00624510 */
        call    FUN_00624510

        /* 0x0053D8EB: cmp al, 0x1 */
        cmp     al, 0x1

        /* 0x0053D8ED: mov eax, [esp + 0x2c] */
        mov     eax, [esp + 0x2c]

        /* 0x0053D8F1: jnz filter_next */
        jnz     filter_next

        /* 0x0053D8F3: cmp eax, [esp + 0x30] */
        cmp     eax, [esp + 0x30]

        /* 0x0053D8F7: jz filter_grow */
        jz      filter_grow

        /* 0x0053D8F9: test eax, eax */
        test    eax, eax

        /* 0x0053D8FB: jz filter_store_null */
        jz      filter_store_null

        /* 0x0053D8FD: mov [eax], edi */
        mov     [eax], edi

        /* 0x0053D8FF: mov eax, [esp + 0x2c] */
        mov     eax, [esp + 0x2c]

    filter_store_null:
        /* 0x0053D903: add eax, 0x4 */
        add     eax, 0x4

        /* 0x0053D906: mov [esp + 0x2c], eax */
        mov     [esp + 0x2c], eax

        /* 0x0053D90A: jmp filter_next */
        jmp     filter_next

    filter_grow:
        /* 0x0053D90C: push 0x1 */
        push    0x1

        /* 0x0053D90E: push esi */
        push    esi

        /* 0x0053D90F: push eax */
        push    eax

        /* 0x0053D910: lea ecx, [esp + 0x34] */
        lea     ecx, [esp + 0x34]

        /* 0x0053D914: call 0x00547fd0 */
        call    FUN_00547fd0

        /* 0x0053D919: mov eax, [esp + 0x2c] */
        mov     eax, [esp + 0x2c]

    filter_next:
        /* 0x0053D91D: mov ecx, [esp + 0x38] */
        mov     ecx, [esp + 0x38]

        /* 0x0053D921: add esi, 0x4 */
        add     esi, 0x4

        /* 0x0053D924: cmp esi, ecx */
        cmp     esi, ecx

        /* 0x0053D926: jnz filter_loop */
        jnz     filter_loop

        /* 0x0053D928: xor edi, edi */
        xor     edi, edi

    filter_done:
        /* 0x0053D92A: sub eax, [esp + 0x28] */
        sub     eax, [esp + 0x28]

        /* 0x0053D92E: push 0x1 */
        push    0x1

        /* 0x0053D930: lea ecx, [esp + 0x24] */
        lea     ecx, [esp + 0x24]

        /* 0x0053D934: sar eax, 2 */
        sar     eax, 2

        /* 0x0053D937: push ecx */
        push    ecx

        /* 0x0053D938: lea ecx, [esp + 0x48] */
        lea     ecx, [esp + 0x48]

        /* 0x0053D93C: mov [esp + 0x28], eax */
        mov     [esp + 0x28], eax

        /* 0x0053D940: call 0x0041f030 */
        call    FUN_0041f030

        /* 0x0053D945: mov esi, [esp + 0x28] */
        mov     esi, [esp + 0x28]

        /* 0x0053D949: cmp esi, [esp + 0x2c] */
        cmp     esi, [esp + 0x2c]

        /* 0x0053D94D: jz send_done */
        jz      send_done

    send_loop:
        /* 0x0053D94F: mov ecx, [esi] */
        mov     ecx, [esi]

        /* 0x0053D951: mov dl, [ecx + 0x4] */
        mov     dl, [ecx + 0x4]

        /* 0x0053D954: mov [esp + 0x12], dl */
        mov     byte ptr [esp + 0x12], dl

        /* 0x0053D958: call 0x00624420 */
        call    FUN_00624420

        /* 0x0053D95D: mov [esp + 0x24], eax */
        mov     [esp + 0x24], eax

        /* 0x0053D961: push 0x1 */
        push    0x1

        /* 0x0053D963: lea eax, [esp + 0x16] */
        lea     eax, [esp + 0x16]

        /* 0x0053D967: push eax */
        push    eax

        /* 0x0053D968: lea ecx, [esp + 0x48] */
        lea     ecx, [esp + 0x48]

        /* 0x0053D96C: call 0x0041f030 */
        call    FUN_0041f030

        /* 0x0053D971: push 0x4 */
        push    0x4

        /* 0x0053D973: lea ecx, [esp + 0x28] */
        lea     ecx, [esp + 0x28]

        /* 0x0053D977: push ecx */
        push    ecx

        /* 0x0053D978: lea ecx, [esp + 0x48] */
        lea     ecx, [esp + 0x48]

        /* 0x0053D97C: call 0x0041f030 */
        call    FUN_0041f030

        /* 0x0053D981: mov eax, [esp + 0x2c] */
        mov     eax, [esp + 0x2c]

        /* 0x0053D985: add esi, 0x4 */
        add     esi, 0x4

        /* 0x0053D988: cmp esi, eax */
        cmp     esi, eax

        /* 0x0053D98A: jnz send_loop */
        jnz     send_loop

    send_done:
        /* 0x0053D98C: mov edx, [esp + 0x34] */
        mov     edx, [esp + 0x34]

        /* 0x0053D990: mov eax, [esp + 0x38] */
        mov     eax, [esp + 0x38]

        /* 0x0053D994: push edi */
        push    edi

        /* 0x0053D995: push ebp */
        push    ebp

        /* 0x0053D996: push edx */
        push    edx

        /* 0x0053D997: push eax */
        push    eax

        /* 0x0053D998: push eax */
        push    eax

        /* 0x0053D999: call 0x00548170 */
        call    FUN_00548170

        /* 0x0053D99E: mov ecx, [esp + 0x44] */
        mov     ecx, [esp + 0x44]

        /* 0x0053D9A2: mov [esp + 0x4c], eax */
        mov     [esp + 0x4c], eax

        /* 0x0053D9A6: mov eax, [esp + 0x3c] */
        mov     eax, [esp + 0x3c]

        /* 0x0053D9AA: sub ecx, eax */
        sub     ecx, eax

        /* 0x0053D9AC: sar ecx, 2 */
        sar     ecx, 2

        /* 0x0053D9AF: push ecx */
        push    ecx

        /* 0x0053D9B0: push eax */
        push    eax

        /* 0x0053D9B1: call 0x00547c50 */
        call    FUN_00547c50

        /* 0x0053D9B6: add esp, 0x1c */
        add     esp, 0x1c

        /* 0x0053D9B9: inc ebx */
        inc     ebx

        /* 0x0053D9BA: cmp ebx, 0x8 */
        cmp     ebx, 0x8

        /* 0x0053D9BD: jl big_loop_start */
        jl      big_loop_start

        /* 0x0053D9C3: mov edx, [esp + 0x14] */
        mov     edx, [esp + 0x14]

        /* 0x0053D9C7: mov eax, [edx + 0x225c] */
        mov     eax, [edx + 0x225c]

        /* 0x0053D9CD: mov cl, [eax + 0x2f4] */
        mov     cl, [eax + 0x2f4]

        /* 0x0053D9D3: test cl, cl */
        test    cl, cl

        /* 0x0053D9D5: mov ebp, [esp + 0x18] */
        mov     ebp, [esp + 0x18]

        /* 0x0053D9D9: jz skip_extra_call */
        jz      skip_extra_call

        /* 0x0053D9DB: mov ecx, ebp */
        mov     ecx, ebp

        /* 0x0053D9DD: call 0x0053db30 */
        call    FUN_0053db30

    skip_extra_call:
        /* 0x0053D9E2: mov edx, [esp + 0x40] */
        mov     edx, [esp + 0x40]

        /* 0x0053D9E6: push edi */
        push    edi

        /* 0x0053D9E7: lea ecx, [esp + 0x44] */
        lea     ecx, [esp + 0x44]

        /* 0x0053D9EB: call [edx + 0xc] */
        call    dword ptr [edx + 0xc]

        /* 0x0053D9EE: mov eax, [esp + 0x58] */
        mov     eax, [esp + 0x58]

        /* 0x0053D9F2: sub eax, [esp + 0x50] */
        sub     eax, [esp + 0x50]

        /* 0x0053D9F6: mov [esp + 0x48], 0xffffffec */
        mov     dword ptr [esp + 0x48], 0xffffffec

        /* 0x0053D9FE: jz epilogue2 */
        jz      epilogue2

        /* 0x0053DA04: mov esi, 0x8 */
        mov     esi, 0x8

        /* 0x0053DA09: lea ebx, [ebp + 0x353e] */
        lea     ebx, [ebp + 0x353e]

    stats_loop:
        /* 0x0053DA0F: mov al, [ebx + -0x2] */
        mov     al, [ebx + -0x2]

        /* 0x0053DA12: test al, al */
        test    al, al

        /* 0x0053DA14: jz stats_loop_next */
        jz      stats_loop_next

        /* 0x0053DA1A: mov edx, [0x007db094] */
        mov     edx, dword ptr [DAT_007db094]

        /* 0x0053DA20: xor ecx, ecx */
        xor     ecx, ecx

        /* 0x0053DA22: mov cl, [edx + 0x28] */
        mov     cl, [edx + 0x28]

        /* 0x0053DA25: cmp edi, ecx */
        cmp     edi, ecx

        /* 0x0053DA27: jz stats_skip_send */
        jz      stats_skip_send

        /* 0x0053DA29: cmp byte ptr [ebx], 0x0 */
        cmp     byte ptr [ebx], 0x0

        /* 0x0053DA2C: jz stats_skip_send */
        jz      stats_skip_send

        /* 0x0053DA2E: mov eax, [esp + 0x50] */
        mov     eax, [esp + 0x50]

        /* 0x0053DA32: mov ecx, [esp + 0x58] */
        mov     ecx, [esp + 0x58]

        /* 0x0053DA36: sub ecx, eax */
        sub     ecx, eax

        /* 0x0053DA38: mov eax, [0x007dab44] */
        mov     eax, dword ptr [DAT_007dab44]

        /* 0x0053DA3D: mov edx, [eax] */
        mov     edx, [eax]

        /* 0x0053DA3F: xor edx, [0x007dab40] */
        xor     edx, dword ptr [DAT_007dab40]

        /* 0x0053DA45: mov eax, [edx + 0x14] */
        mov     eax, [edx + 0x14]

        /* 0x0053DA48: add edx, 0x14 */
        add     edx, 0x14

        /* 0x0053DA4B: xor eax, 0x85739531 */
        xor     eax, 0x85739531

        /* 0x0053DA50: mov eax, [eax + 0x1814] */
        mov     eax, [eax + 0x1814]

        /* 0x0053DA56: shl ecx, 3 */
        shl     ecx, 3

        /* 0x0053DA59: add [esi + eax + 0x3c3c], ecx */
        add     dword ptr [esi + eax + 0x3c3c], ecx

        /* 0x0053DA60: add eax, 0x3c3c */
        add     eax, 0x3c3c

        /* 0x0053DA65: add [eax + 0xc00], ecx */
        add     dword ptr [eax + 0xc00], ecx

        /* 0x0053DA6B: push 0x1 */
        push    0x1

        /* 0x0053DA6D: lea ecx, [esp + 0x44] */
        lea     ecx, [esp + 0x44]

        /* 0x0053DA71: push ecx */
        push    ecx

        /* 0x0053DA72: jmp stats_call */
        jmp     stats_call

    stats_skip_send:
        /* 0x0053DA74: test al, al */
        test    al, al

        /* 0x0053DA76: jz stats_loop_next */
        jz      stats_loop_next

        /* 0x0053DA78: mov eax, [0x007db094] */
        mov     eax, dword ptr [DAT_007db094]

        /* 0x0053DA7D: xor edx, edx */
        xor     edx, edx

        /* 0x0053DA7F: mov dl, [eax + 0x28] */
        mov     dl, [eax + 0x28]

        /* 0x0053DA82: cmp edi, edx */
        cmp     edi, edx

        /* 0x0053DA84: jz stats_loop_next */
        jz      stats_loop_next

        /* 0x0053DA86: cmp byte ptr [ebx], 0x0 */
        cmp     byte ptr [ebx], 0x0

        /* 0x0053DA89: jnz stats_loop_next */
        jnz     stats_loop_next

        /* 0x0053DA8B: push edi */
        push    edi

        /* 0x0053DA8C: mov ecx, ebp */
        mov     ecx, ebp

        /* 0x0053DA8E: call 0x0053db90 */
        call    FUN_0053db90

        /* 0x0053DA93: mov ecx, [esp + 0x50] */
        mov     ecx, [esp + 0x50]

        /* 0x0053DA97: mov eax, [esp + 0x58] */
        mov     eax, [esp + 0x58]

        /* 0x0053DA9B: sub eax, ecx */
        sub     eax, ecx

        /* 0x0053DA9D: mov ecx, [0x007dab44] */
        mov     ecx, dword ptr [DAT_007dab44]

        /* 0x0053DAA3: mov edx, [ecx] */
        mov     edx, [ecx]

        /* 0x0053DAA5: xor edx, [0x007dab40] */
        xor     edx, dword ptr [DAT_007dab40]

        /* 0x0053DAAB: mov ecx, [edx + 0x14] */
        mov     ecx, [edx + 0x14]

        /* 0x0053DAAE: add edx, 0x14 */
        add     edx, 0x14

        /* 0x0053DAB1: xor ecx, 0x85739531 */
        xor     ecx, 0x85739531

        /* 0x0053DAB7: mov ecx, [ecx + 0x1814] */
        mov     ecx, [ecx + 0x1814]

        /* 0x0053DABD: shl eax, 3 */
        shl     eax, 3

        /* 0x0053DAC0: add [esi + ecx + 0x3c3c], eax */
        add     dword ptr [esi + ecx + 0x3c3c], eax

        /* 0x0053DAC7: add ecx, 0x3c3c */
        add     ecx, 0x3c3c

        /* 0x0053DACD: add [ecx + 0xc00], eax */
        add     dword ptr [ecx + 0xc00], eax

        /* 0x0053DAD3: push 0x1 */
        push    0x1

        /* 0x0053DAD5: lea eax, [esp + 0x44] */
        lea     eax, [esp + 0x44]

        /* 0x0053DAD9: push eax */
        push    eax

    stats_call:
        /* 0x0053DADA: mov ecx, [edx] */
        mov     ecx, [edx]

        /* 0x0053DADC: push 0x18 */
        push    0x18

        /* 0x0053DADE: push edi */
        push    edi

        /* 0x0053DADF: xor ecx, 0x85739531 */
        xor     ecx, 0x85739531

        /* 0x0053DAE5: call 0x004ce190 */
        call    FUN_004ce190

    stats_loop_next:
        /* 0x0053DAEA: add esi, 0x4 */
        add     esi, 0x4

        /* 0x0053DAED: inc edi */
        inc     edi

        /* 0x0053DAEE: add ebx, 0x2038 */
        add     ebx, 0x2038

        /* 0x0053DAF4: cmp esi, 0x404 */
        cmp     esi, 0x404

        /* 0x0053DAFA: jl stats_loop */
        jl      stats_loop

        /* 0x0053DB00: xor edi, edi */
        xor     edi, edi

    epilogue2:
        /* 0x0053DB02: mov eax, [esp + 0x34] */
        mov     eax, [esp + 0x34]

        /* 0x0053DB06: cmp eax, edi */
        cmp     eax, edi

        /* 0x0053DB08: pop edi */
        pop     edi

        /* 0x0053DB09: pop esi */
        pop     esi

        /* 0x0053DB0A: pop ebp */
        pop     ebp

        /* 0x0053DB0B: pop ebx */
        pop     ebx

        /* 0x0053DB0C: jz epilogue3 */
        jz      epilogue3

        /* 0x0053DB0E: push eax */
        push    eax

        /* 0x0053DB0F: call 0x004084e0 */
        call    FUN_004084e0

        /* 0x0053DB14: add esp, 0x4 */
        add     esp, 0x4

    epilogue3:
        /* 0x0053DB17: lea ecx, [esp + 0x30] */
        lea     ecx, [esp + 0x30]

        /* 0x0053DB1B: call 0x0041ef60 */
        call    FUN_0041ef60

        /* 0x0053DB20: add esp, 0x58 */
        add     esp, 0x58

        /* 0x0053DB23: ret */
        ret
    }


}
