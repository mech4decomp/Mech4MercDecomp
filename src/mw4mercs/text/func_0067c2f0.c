/*
 * FUN_0067C2F0 (306 B) — __fastcall (ECX = this), no stack args (RET).
 * Constructor: initializes a large object (arrays of sub-objects, floats,
 * and a checksum field derived from DAT_007dab44/DAT_007dab40).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0067c0b0(void);
extern void __cdecl FUN_0067c0f0(void);
extern int __cdecl FUN_00707e70(int a);
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007b8d78;
extern int DAT_007b8d7c;
extern int DAT_007b8d80;

__declspec(naked) void __fastcall FUN_0067c2f0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0x10
        push    ebx
        push    ebp
        mov     ebx, ecx
        push    esi
        lea     ebp, [ebx + 0x37d4]
        push    edi
        mov     dword ptr [esp + 0x18], ebx
        mov     esi, ebp
        mov     edi, 0xff
    L_310:
        mov     ecx, esi
        call    FUN_0067c0b0
        add     esi, 0x34
        dec     edi
        jnz     L_310
        mov     eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [esp + 0x18]
        xor     edx, 0x85739531
        mov     dword ptr [esp + 0x14], ebp
        mov     dword ptr [ebx], edx
        lea     edi, [ebx + 0x2cd8]
        lea     ebp, [ebx + 0x7fc]
        lea     esi, [ebx + 0x14f0]
        mov     eax, 0xffffd328
        add     ebx, 0x20ec
        sub     eax, ecx
        mov     dword ptr [esp + 0x1c], eax
    L_35f:
        mov     byte ptr [edi - 0x1ce4], 0
        mov     dword ptr [esi - 0x3fc], 0
        push    1
        mov     dword ptr [esi], 0
        call    FUN_00707e70
        fstp    dword ptr [esi + 0x3fc]
        push    1
        call    FUN_00707e70
        fstp    dword ptr [esi + 0x7f8]
        mov     eax, dword ptr [DAT_007b8d78]
        mov     ecx, dword ptr [DAT_007b8d7c]
        mov     edx, dword ptr [DAT_007b8d80]
        mov     dword ptr [ebx - 8], eax
        mov     dword ptr [ebx - 4], ecx
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [ebx], edx
        mov     byte ptr [edi], 0
        mov     byte ptr [edi + 0x9fc], 1
        xor     eax, eax
        mov     dword ptr [ebp - 0x7f8], eax
        mov     dword ptr [ebp - 0x7f4], eax
        mov     dword ptr [ebp], eax
        mov     dword ptr [ebp + 4], 0x412e8480
        mov     byte ptr [edi + 0xff], al
        mov     dword ptr [esi + 0x19e8], eax
        mov     dword ptr [esi + 0x1de8], eax
        call    FUN_0067c0f0
        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x1c]
        add     esi, 4
        add     ebx, 0xc
        inc     edi
        add     edx, 0x34
        add     eax, edi
        add     ebp, 8
        cmp     eax, 0xff
        mov     dword ptr [esp + 0x14], edx
        jl      L_35f
        mov     eax, dword ptr [esp + 0x18]
        pop     edi
        mov     dword ptr [eax + 0x32d4], 0
        pop     esi
        pop     ebp
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
