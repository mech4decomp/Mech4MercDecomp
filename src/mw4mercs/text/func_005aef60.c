/*
 * FUN_005aef60 (179 B) — __cdecl, no params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int size);
extern void __fastcall FUN_00501a20(void *ecx);
extern void __fastcall FUN_005013f0(void *ecx);
extern void __fastcall FUN_005016b0(void *ecx);

__declspec(naked) void __stdcall FUN_005aef60(void)
{
    

extern int DAT_007dc8cc;
extern int DAT_007dc690;
extern int DAT_007f20dc;
__asm {
push    0xa4
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      alloc_fail
        mov ecx, dword ptr [DAT_007dc8cc]
        mov edx, dword ptr [DAT_007dc690]
        push    0x502c60
        push    0x5028b0
        push    0x502370
        push    0x0
        push    0x501eb0
        push    ecx
        push    0x501b70
        push    0x5af050
        push    0x0
        push    0x0
        push    edx
        push    0x785ab8
        push    0x499
        mov     ecx, eax
        call    FUN_00501a20
        mov dword ptr [DAT_007f20dc], eax
        jmp     continue
alloc_fail:
        mov dword ptr [DAT_007f20dc], 0x0
continue:
        push    esi
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      second_fail
        push    0x168
        push    0x1
        push    0x785aac
        push    0x6
        mov     ecx, esi
        call    FUN_005013f0
        mov eax, dword ptr [DAT_007f20dc]
        push    esi
        lea     ecx, [eax + 0x44]
        mov     dword ptr [esi], 0x773234
        call    FUN_005016b0
        pop     esi
        ret
second_fail:
        mov eax, dword ptr [DAT_007f20dc]
        xor     esi, esi
        push    esi
        lea     ecx, [eax + 0x44]
        call    FUN_005016b0
        pop     esi
        ret
    }


}
