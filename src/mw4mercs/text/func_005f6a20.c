/*
 * FUN_005f6a20 (138 B) — Builds a linked-list node and computes a packed
 * count field by walking the list.
 *
 * __fastcall (ECX = param_1).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __fastcall FUN_005f6b40(void *param);
extern void __stdcall FUN_005ba720(void *a, void *b, void *c);
extern void __stdcall FUN_005ba780(void *a, void *b);
extern void __stdcall FUN_005ba730(void *a, void *b);

__declspec(naked) void __fastcall FUN_005f6a20(void *param)
{
    __asm {
        sub     esp, 0xc
        push    esi
        push    edi
        mov     edi, ecx
        call    FUN_005f6b40
        test    eax, eax
        jz      done
        mov     ecx, dword ptr [edi + 0x4f4]
        mov     edx, dword ptr [edi + 0x4f8]
        lea     ecx, [ecx + ecx*4]
        lea     ecx, [edx + ecx*4]
        lea     esi, [eax + ecx*8]
        lea     edx, [esp + 0x8]
        push    edx
        lea     eax, [esp + 0x10]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x10], edi
        call    FUN_005ba720
        push    ecx
        mov     ecx, esp
        push    eax
        call    FUN_005ba780
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, esi
        call    FUN_005ba730
        mov     eax, dword ptr [esi]
        mov     ecx, eax
        xor     edx, edx
        test    ecx, ecx
        jz      count_done
count_loop:
        mov     ecx, dword ptr [ecx]
        inc     edx
        test    ecx, ecx
        jnz     count_loop
count_done:
        shl     edx, 0x18
        test    eax, eax
        mov     dword ptr [esi + 0x4], edx
        jz      done
sum_loop:
        mov     edx, dword ptr [eax + 0x4]
        mov     ecx, dword ptr [edx + 0x30]
        mov     edx, dword ptr [esi + 0x4]
        mov     eax, dword ptr [eax]
        and     ecx, 0xffffff
        add     edx, ecx
        test    eax, eax
        mov     dword ptr [esi + 0x4], edx
        jnz     sum_loop
done:
        pop     edi
        pop     esi
        add     esp, 0xc
        ret
    }
}
