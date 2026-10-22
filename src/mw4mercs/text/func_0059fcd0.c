/*
 * FUN_0059FCD0 (76 B) — __thiscall method.
 *
 * Takes a param with a vtable at offset 0x78. Calls vtable[1] on
 * param+0x78, then adds 0x30 to the result. Looks up in this+0x34
 * container via FUN_00416B60. If found, decrements refcount at
 * result+0x1C. If refcount reaches 0, removes from container via
 * FUN_00415CA0 and calls result->vtable[0](1). Decrements this+0x50.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__fastcall FUN_00416b60(void *container, void *param);
extern void __fastcall FUN_00415ca0(void *container, void *item);

__declspec(naked) void __stdcall FUN_0059fcd0(void)
{
    __asm {
        mov     eax, [esp + 4]              ; eax = param
        mov     edx, [eax + 0x78]           ; edx = param->vtable_at_78
        push    ebx
        mov     ebx, ecx                    ; ebx = this
        push    esi
        lea     ecx, [eax + 0x78]           ; ecx = param + 0x78
        push    edi
        call    dword ptr [edx + 4]         ; vtable[1](param+0x78)
        add     eax, 0x30
        lea     edi, [ebx + 0x34]           ; edi = this + 0x34 (container)
        push    eax
        mov     ecx, edi
        call    FUN_00416b60                ; result = container->find(eax)
        mov     esi, eax
        test    esi, esi
        je      L_done

        mov     ecx, [esi + 0x1C]           ; ecx = result->refcount
        dec     ecx
        mov     eax, ecx
        test    eax, eax
        mov     [esi + 0x1C], ecx
        jg      L_skip_delete

        push    esi
        mov     ecx, edi
        call    FUN_00415ca0                ; container->remove(result)
        mov     eax, [esi]
        push    1
        mov     ecx, esi
        call    dword ptr [eax]             ; result->vtable[0](1)

    L_skip_delete:
        dec     dword ptr [ebx + 0x50]

    L_done:
        pop     edi
        pop     esi
        pop     ebx
        ret     4
    }
}
