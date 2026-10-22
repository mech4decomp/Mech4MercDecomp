/*
 * FUN_005bb890 (159 B) — __thiscall (ECX = this), RET 4 (one stack param).
 *
 * Constructor: initializes a renderer object, optionally allocates a
 * 0x270-byte sub-object, and allocates a 0x34-byte object stored in
 * global 0x7F2114.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004e0f70(void);
extern void __fastcall FUN_00679f40(void);
extern void __fastcall FUN_004084d0(void);
extern void __fastcall FUN_00626520(void);
extern void __fastcall FUN_004c8eb0(void);
extern void __fastcall FUN_005b7fe0(void);

__declspec(naked) void FUN_005bb890(void)
{
    

extern int DAT_007f2268;
extern int DAT_007f2114;
__asm {
        mov eax, dword ptr [DAT_007f2268]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_004e0f70
        mov     eax, 0xBF800000
        lea     ecx, [esi + 0x7C]
        mov     dword ptr [esi + 0x70], eax
        mov     dword ptr [esi + 0x6C], eax
        mov     dword ptr [esi + 0x68], eax
        call    FUN_00679f40
        mov     al, byte ptr [esp + 8]
        test    al, al
        mov     dword ptr [esi], 0x7870F4
        jz      L1
        push    0x270
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L2
        mov     ecx, eax
        call    FUN_00626520
        jmp     L3
L2:
        xor     eax, eax
L3:
        push    0x10
        push    eax
        call    FUN_004c8eb0
        add     esp, 8
L1:
        push    0x34
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L4
        mov     ecx, eax
        call    FUN_005b7fe0
        mov dword ptr [DAT_007f2114], eax
        mov     dword ptr [esi + 0x64], 0
        mov     byte ptr [esi + 0x78], 0
        mov     eax, esi
        pop     esi
        ret     4
L4:
        mov     dword ptr [esi + 0x64], 0
        mov     byte ptr [esi + 0x78], 0
        mov     eax, esi
        mov dword ptr [DAT_007f2114], 0x0
        pop     esi
        ret     4
    }


}
