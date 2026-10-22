/*
 * FUN_0067c440 (258 B) — __fastcall (ECX = param_1), plain RET.
 *
 * Initializes a table of per-entry structures in a loop (0xff iterations),
 * calling FUN_00707e70 (returns float in ST0) and FUN_0067c0f0 per entry.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_007b8d78;
extern int DAT_007b8d80;
extern int DAT_007b8d7c;

extern float __cdecl FUN_00707e70(int a);
extern void __cdecl FUN_0067c0f0(void);

__declspec(naked) void __fastcall FUN_0067c440(int param_1)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0x10
        push    ebx
        lea     eax, [ecx + 0x37d4]
        push    ebp
        mov     dword ptr [esp + 0xc], eax
        push    esi
        mov     eax, 0xffffd328
        sub     eax, ecx
        push    edi
        mov     dword ptr [esp + 0x1c], ecx
        lea     edi, [ecx + 0x2cd8]
        lea     ebp, [ecx + 0x7fc]
        lea     esi, [ecx + 0x14f0]
        lea     ebx, [ecx + 0x20ec]
        mov     dword ptr [esp + 0x18], eax

    label_0067c47e:
        mov     byte ptr [edi + 0xffffe31c], 0x0
        mov     dword ptr [esi + 0xfffffc04], 0x0
        push    0x1
        mov     dword ptr [esi], 0x0
        call    FUN_00707e70
        fstp    dword ptr [esi + 0x3fc]
        push    0x1
        call    FUN_00707e70
        fstp    dword ptr [esi + 0x7f8]
        mov     ecx, dword ptr [DAT_007b8d78]
        mov     eax, dword ptr [DAT_007b8d80]
        mov     edx, dword ptr [DAT_007b8d7c]
        mov     dword ptr [ebx - 0x8], ecx
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [ebx], eax
        mov     dword ptr [ebx - 0x4], edx
        mov     byte ptr [edi], 0x0
        mov     byte ptr [edi + 0x9fc], 0x1
        xor     eax, eax
        mov     dword ptr [ebp + 0xfffff808], eax
        mov     dword ptr [ebp + 0xfffff80c], eax
        mov     dword ptr [ebp], eax
        mov     dword ptr [ebp + 0x4], 0x412e8480
        mov     byte ptr [edi + 0xff], al
        mov     dword ptr [esi + 0x19e8], eax
        mov     dword ptr [esi + 0x1de8], eax
        call    FUN_0067c0f0
        mov     ecx, dword ptr [esp + 0x14]
        add     ecx, 0x34
        add     esi, 0x4
        add     ebx, 0xc
        mov     dword ptr [esp + 0x14], ecx
        mov     ecx, dword ptr [esp + 0x18]
        inc     edi
        add     ecx, edi
        add     ebp, 0x8
        cmp     ecx, 0xff
        jl      label_0067c47e
        mov     edx, dword ptr [esp + 0x1c]
        pop     edi
        mov     dword ptr [edx + 0x32d4], 0x0
        pop     esi
        pop     ebp
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
