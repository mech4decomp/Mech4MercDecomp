/*
 * FUN_005b5350 (133 B) — __thiscall, RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0041c540(void *a, void *b, void *c);
extern void __stdcall FUN_0041acb0(void *a);

__declspec(naked) void __stdcall FUN_005b5350(int a)
{
    

extern int DAT_007b220c;
__asm {
push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0xe0]
        cmp     dword ptr [eax + 0x14], 0x16
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        jnz     L_537f
        mov ecx, dword ptr [DAT_007b220c]
        push    ecx
        lea     edx, [esi + 0x584]
        push    edi
        push    edx
        call    FUN_0041c540
        add     esp, 0xc
        test    al, al
        jnz     L_53d0
L_537f:
        mov     eax, dword ptr [esi + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [esi + 0x594]
        call    FUN_0041acb0
        mov     ecx, dword ptr [edi]
        mov     edx, dword ptr [edi + 0x4]
        mov     eax, dword ptr [edi + 0x8]
        mov     dword ptr [esi + 0x584], ecx
        mov     ecx, dword ptr [esi + 0xe0]
        push    0x0
        mov     dword ptr [esi + 0x588], edx
        mov     edx, dword ptr [ecx]
        push    0x16
        mov     dword ptr [esi + 0x590], 0x0
        mov     dword ptr [esi + 0x58c], eax
        call    dword ptr [edx + 0x4]
        mov     byte ptr [esi + 0x514], 0x0
L_53d0:
        pop     edi
        pop     esi
        ret     0x4
    }


}
