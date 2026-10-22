/*
 * FUN_00558890 (361 B) ??? Object method. Compares two words, then
 * does complex setup with many calls.
 *
 * __thiscall (ECX = this), 1 param (short*).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall func_00558890(void)
{
    

extern int DAT_007db0ac;
extern int DAT_007db0ae;
extern void __cdecl FUN_1004d1f4e(void);
extern void __cdecl FUN_1004da8e8(void);
extern void __cdecl FUN_10041940d(void);
extern void __cdecl FUN_1004e75c1(void);
extern void __cdecl FUN_10041e5f6(void);
extern int DAT_007db098;
extern void __cdecl FUN_1004ceb6b(void);
extern void __cdecl FUN_10041fbef(void);
extern void __cdecl FUN_1004d983e(void);
extern void __cdecl FUN_10041fbf3(void);
extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_10041fc81(void);
extern void __cdecl FUN_10041fc73(void);
extern void __cdecl FUN_1004f4f1c(void);
extern void __cdecl FUN_10041fc65(void);
extern void __cdecl FUN_1004f530e(void);
extern void __cdecl FUN_10041fc57(void);
extern void __cdecl FUN_10041fc47(void);
extern void __cdecl FUN_10041e5c7(void);
extern void __cdecl FUN_1004d206e(void);
__asm {
sub     esp, 0x128
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0x134]
        mov     ax, word ptr [esi]
        cmp ax, word ptr [DAT_007db0ac]
        mov     ebx, ecx
        jnz     L_body
        mov     cx, word ptr [esi + 2]
        cmp cx, word ptr [DAT_007db0ae]
        jz      L_end
L_body:
        push    ebp
        push    edi
        push    1
        push    esi
        lea     ecx, [esp + 0x3c]
        call FUN_1004d1f4e
        push    esi
        call FUN_1004da8e8
        mov     edi, dword ptr [ebx + 0xd8]
        add     esp, 4
        add     edi, 0x80
        push    edi
        lea     ecx, [esp + 0x7c]
        mov     ebp, eax
        call FUN_10041940d
        push    0x8bd5e8
        push    0x8bd5e8
        push    0
        push    -1
        push    2
        push    0
        push    edi
        push    esi
        push    2
        push    ebp
        push    0
        push    2
        push    0x90
        lea     ecx, [esp + 0xdc]
        call FUN_1004e75c1
        mov     edx, dword ptr [esp + 0xa8]
        push    0
        push    edx
        lea     eax, [esp + 0xb0]
        push    eax
        lea     ecx, [esp + 0x20]
        call FUN_10041e5f6
        mov ecx, dword ptr [DAT_007db098]
        call FUN_1004ceb6b
        mov     cl, byte ptr [eax]
        mov     byte ptr [esp + 0x10], cl
        mov     dx, word ptr [eax + 2]
        lea     esi, [ebx + 0x318]
        mov     ecx, esi
        mov     word ptr [esp + 0x12], dx
        call FUN_10041fbef
        push    0
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x1c]
        push    ecx
        call FUN_1004d983e
        add     esp, 0xc
        push    eax
        mov     ecx, esi
        call FUN_10041fbf3
        mov edx, dword ptr [DAT_007dab44]
        mov edi, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [edx]
        xor     eax, edi
        mov     edi, dword ptr [eax + 0x1c]
        xor     edi, 0x85739531
        mov     ebp, dword ptr [edi]
        mov     ecx, esi
        call FUN_10041fc81
        push    eax
        mov     ecx, edi
        call    dword ptr [ebp + 0x28]
        push    ebx
        mov     ecx, esi
        call FUN_10041fc73
        mov     ecx, eax
        call FUN_1004f4f1c
        mov     ecx, esi
        call FUN_10041fc65
        mov     ecx, eax
        call FUN_1004f530e
        mov     ecx, esi
        call FUN_10041fc57
        mov     edx, dword ptr [eax]
        push    1
        mov     ecx, eax
        call    dword ptr [edx + 0x48]
        mov     ecx, esi
        call FUN_10041fc47
        lea     ecx, [esp + 0x14]
        mov     byte ptr [eax + 0x250], 1
        call FUN_10041e5c7
        lea     ecx, [esp + 0x34]
        call FUN_1004d206e
        pop     edi
        pop     ebp
L_end:
        pop     esi
        pop     ebx
        add     esp, 0x128
        ret     4
    }


}
